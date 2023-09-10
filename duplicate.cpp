#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<< " Enter length of Array: ";
	cin>>len;
	int num;
	int list[len];
	int list2[100];
	int i,j,z=0;
	
	for (i=0;i<len;i++)
	{
		cout<<"enter num: ";
		cin>>num;
		list[i]=num;
	}
	i=0;
	while (i<len-1)
	{
		j=i+1;
		while (j<len)
		{
			if (list[i]==list[j])
			{
				cout<<list[j]<<endl;
				list2[z]=list[i];
				z=z+1;
			}
			j++;
		}
	i++;
	}
	cout<<"print dublicate element array "<<endl;
	for(i=0;i<z;i++)
	{
		cout<<list2[i]<<" ";
	}
	return 0;
}
