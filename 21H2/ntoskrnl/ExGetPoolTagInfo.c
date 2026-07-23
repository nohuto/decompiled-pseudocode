/*
 * XREFs of ExGetPoolTagInfo @ 0x1406B47B8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExGetPoolTagInfo(_DWORD *a1, unsigned int a2, int *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  SIZE_T v8; // rdx
  char *PoolWithTag; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v17; // [rsp+20h] [rbp-68h]
  unsigned int v18; // [rsp+24h] [rbp-64h]
  _DWORD *v19; // [rsp+28h] [rbp-60h]
  _DWORD *v20; // [rsp+30h] [rbp-58h]
  _QWORD v21[10]; // [rsp+38h] [rbp-50h] BYREF

  v18 = 0;
  v20 = a1 + 2;
  v17 = 8;
  *a1 = 0;
  v6 = PoolTrackTableSize;
  v7 = PoolTrackTableExpansionSize;
  v8 = 56 * PoolTrackTableSize + 56 * PoolTrackTableExpansionSize;
  if ( v8 < 56 * PoolTrackTableSize )
    return 3221225626LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6F666E49u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v21[0] = PoolWithTag;
  v21[1] = PoolTrackTableSize;
  v21[2] = &PoolWithTag[56 * PoolTrackTableSize];
  v21[3] = v7;
  KeGenericCallDpc((__int64)ExpGetPoolTagInfoTarget, (__int64)v21);
  v11 = v10;
  v19 = v10;
  while ( v11 < &v10[14 * v7 + 14 * v6] )
  {
    if ( !*v11 )
      goto LABEL_6;
    ++*a1;
    v13 = v17 + 40;
    v17 = v13;
    if ( v13 < 0x28 )
    {
      v18 = -1073741675;
      break;
    }
    if ( a2 < v13 )
    {
      v18 = -1073741820;
LABEL_6:
      v12 = v19;
      goto LABEL_7;
    }
    *v20 = *v19;
    v12 = v19;
    v20[1] = v19[10];
    v20[2] = v19[12];
    *((_QWORD *)v20 + 2) = *((_QWORD *)v19 + 4);
    v20[6] = v19[4];
    v20[7] = v19[6];
    *((_QWORD *)v20 + 4) = *((_QWORD *)v19 + 1);
    v14 = v20[2];
    if ( v20[1] < v14 )
      v20[1] = v14;
    v15 = v20[7];
    if ( v20[6] < v15 )
      v20[6] = v15;
    v20 += 10;
LABEL_7:
    v11 = v12 + 14;
    v19 = v11;
  }
  ExFreePoolWithTag(v10, 0);
  if ( a3 )
    *a3 = v17;
  return v18;
}
