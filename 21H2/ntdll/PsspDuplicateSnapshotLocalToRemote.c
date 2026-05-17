/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1801141C0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     Feature_3106716987__private_IsEnabledDeviceUsage @ 0x18009D104 (Feature_3106716987__private_IsEnabledDeviceUsage.c)
 *     Feature_3280147768__private_IsEnabledDeviceUsage @ 0x18009D140 (Feature_3280147768__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x18009D17C (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009DD80 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009DDC0 (ZwDuplicateObject.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     PssNtFreeSnapshot @ 0x180114450 (PssNtFreeSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  int VirtualMemory; // ebx
  _QWORD v28[144]; // [rsp+60h] [rbp-A0h] BYREF

  if ( (unsigned int)Feature_3106716987__private_IsEnabledDeviceUsage() )
  {
    result = PssValidateSnapshotDescriptor((__int64 *)a1);
    if ( (int)result < 0 )
      return result;
  }
  memset(v28, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    VirtualMemory = -1073741675;
    goto LABEL_30;
  }
  if ( (unsigned int)(v7 + 1144) < 0x478 )
  {
    VirtualMemory = -1073741675;
LABEL_30:
    if ( v28[126] )
      ZwDuplicateObject();
    if ( v28[122] )
      ZwDuplicateObject();
    if ( v28[115] )
      ZwDuplicateObject();
    if ( v28[118] )
      ZwDuplicateObject();
    if ( v28[112] )
      ZwDuplicateObject();
    if ( v28[109] )
      ZwDuplicateObject();
    if ( v28[141] )
      ZwDuplicateObject();
    goto LABEL_44;
  }
  v8 = 8LL;
  v9 = v28;
  v10 = (_OWORD *)a1;
  do
  {
    v11 = v10[1];
    *(_OWORD *)v9 = *v10;
    v12 = v10[2];
    *((_OWORD *)v9 + 1) = v11;
    v13 = v10[3];
    *((_OWORD *)v9 + 2) = v12;
    v14 = v10[4];
    *((_OWORD *)v9 + 3) = v13;
    v15 = v10[5];
    *((_OWORD *)v9 + 4) = v14;
    v16 = v10[6];
    *((_OWORD *)v9 + 5) = v15;
    v17 = v10[7];
    v10 += 8;
    *((_OWORD *)v9 + 6) = v16;
    v9 += 16;
    *((_OWORD *)v9 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = *(_QWORD *)(a1 + 872);
  v19 = v10[1];
  *(_OWORD *)v9 = *v10;
  v20 = v10[2];
  *((_OWORD *)v9 + 1) = v19;
  v21 = v10[3];
  *((_OWORD *)v9 + 2) = v20;
  v22 = v10[4];
  *((_OWORD *)v9 + 3) = v21;
  v23 = v10[5];
  *((_OWORD *)v9 + 4) = v22;
  v24 = v10[6];
  v25 = *((_QWORD *)v10 + 14);
  *((_OWORD *)v9 + 5) = v23;
  *((_OWORD *)v9 + 6) = v24;
  v9[14] = v25;
  v28[109] = 0LL;
  v28[112] = 0LL;
  v28[115] = 0LL;
  v28[118] = 0LL;
  v28[122] = 0LL;
  v28[126] = 0LL;
  v28[141] = 0LL;
  if ( v18 )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 896) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 920) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 944) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 976) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 1008) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 1128) )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_30;
  HIDWORD(v28[0]) = HIDWORD(v28[0]) & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v28[113] = 1144LL;
  if ( *(_WORD *)(a1 + 280) )
    v28[36] = 296LL;
  Feature_3280147768__private_IsEnabledDeviceUsage();
  VirtualMemory = NtWriteVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_30;
  if ( *(_QWORD *)(a1 + 904) )
  {
    VirtualMemory = NtWriteVirtualMemory();
    if ( VirtualMemory < 0 )
      goto LABEL_30;
  }
  VirtualMemory = 0;
  *a3 = 0LL;
LABEL_44:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
