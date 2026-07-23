/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180117278
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180114180 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     Feature_3106716987__private_IsEnabledDeviceUsage @ 0x18009D104 (Feature_3106716987__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x18009D140 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009DD40 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009DD80 (ZwDuplicateObject.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     PssNtFreeSnapshot @ 0x180114410 (PssNtFreeSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  void *v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rax
  NTSTATUS v29; // ebx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  void *v35; // rdx
  void *v36; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Buffer[144]; // [rsp+50h] [rbp-B0h] BYREF

  if ( (unsigned int)Feature_3106716987__private_IsEnabledDeviceUsage() )
  {
    result = PssValidateSnapshotDescriptor((__int64 *)a1);
    if ( (int)result < 0 )
      return result;
  }
  BaseAddress = 0LL;
  memset(Buffer, 0, 0x478uLL);
  v9 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v9 > 0xFFFFFFFF || (v10 = v9 + 1144, (unsigned int)v9 >= 0xFFFFFB88) )
  {
    v29 = -1073741675;
LABEL_34:
    if ( Buffer[126] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[126], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[122] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[122], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[115] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[115], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[118] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[118], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[112] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[112], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[109] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[109], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[141] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[141], 0LL, 0LL, 0, 0, 1u);
    goto LABEL_48;
  }
  v11 = 8LL;
  v12 = Buffer;
  v13 = (_OWORD *)a1;
  do
  {
    v14 = v13[1];
    *(_OWORD *)v12 = *v13;
    v15 = v13[2];
    *((_OWORD *)v12 + 1) = v14;
    v16 = v13[3];
    *((_OWORD *)v12 + 2) = v15;
    v17 = v13[4];
    *((_OWORD *)v12 + 3) = v16;
    v18 = v13[5];
    *((_OWORD *)v12 + 4) = v17;
    v19 = v13[6];
    *((_OWORD *)v12 + 5) = v18;
    v20 = v13[7];
    v13 += 8;
    *((_OWORD *)v12 + 6) = v19;
    v12 += 16;
    *((_OWORD *)v12 - 1) = v20;
    --v11;
  }
  while ( v11 );
  v21 = *(void **)(a1 + 872);
  v22 = v13[1];
  *(_OWORD *)v12 = *v13;
  v23 = v13[2];
  *((_OWORD *)v12 + 1) = v22;
  v24 = v13[3];
  *((_OWORD *)v12 + 2) = v23;
  v25 = v13[4];
  *((_OWORD *)v12 + 3) = v24;
  v26 = v13[5];
  *((_OWORD *)v12 + 4) = v25;
  v27 = v13[6];
  v28 = *((_QWORD *)v13 + 14);
  *((_OWORD *)v12 + 5) = v26;
  *((_OWORD *)v12 + 6) = v27;
  v12[14] = v28;
  Buffer[109] = 0LL;
  Buffer[112] = 0LL;
  Buffer[115] = 0LL;
  Buffer[118] = 0LL;
  Buffer[122] = 0LL;
  Buffer[126] = 0LL;
  Buffer[141] = 0LL;
  if ( v21 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21, a2, (PHANDLE)&Buffer[109], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v30 = *(void **)(a1 + 896);
  if ( v30 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[112], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v31 = *(void **)(a1 + 920);
  if ( v31 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[115], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v32 = *(void **)(a1 + 944);
  if ( v32 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[118], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v33 = *(void **)(a1 + 976);
  if ( v33 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, (PHANDLE)&Buffer[122], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v34 = *(void **)(a1 + 1008);
  if ( v34 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, a2, (PHANDLE)&Buffer[126], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  v35 = *(void **)(a1 + 1128);
  if ( v35 )
  {
    v29 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, a2, (PHANDLE)&Buffer[141], 0, 0, 2u);
    if ( v29 < 0 )
      goto LABEL_31;
  }
  RegionSize = v10;
  v29 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v29 < 0 )
    goto LABEL_31;
  HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    Buffer[113] = (char *)BaseAddress + 1144;
  if ( *(_WORD *)(a1 + 280) )
    Buffer[36] = (char *)BaseAddress + 296;
  v29 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, 0x478uLL, 0LL);
  if ( v29 < 0 )
  {
LABEL_31:
    if ( BaseAddress )
    {
      RegionSize = v10;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    goto LABEL_34;
  }
  v36 = *(void **)(a1 + 904);
  v29 = 0;
  if ( v36 )
  {
    v29 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v36, (unsigned int)v9, 0LL);
    if ( v29 >= 0 )
    {
      v29 = 0;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
LABEL_30:
  *a3 = BaseAddress;
LABEL_48:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v29;
}
