/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180117418
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180114320 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009D7F0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009D830 (ZwDuplicateObject.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     PssNtFreeSnapshot @ 0x1801145B0 (PssNtFreeSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _QWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  void *v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  NTSTATUS v27; // ebx
  void *v28; // rdx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Buffer[144]; // [rsp+60h] [rbp-A0h] BYREF

  v37 = a4;
  BaseAddress = 0LL;
  memset(Buffer, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    v27 = -1073741675;
  }
  else
  {
    v8 = v7 + 1144;
    if ( (unsigned int)(v7 + 1144) < 0x478 )
    {
      v27 = -1073741675;
    }
    else
    {
      v9 = 8LL;
      v10 = (_OWORD *)a1;
      v11 = Buffer;
      do
      {
        v12 = v10[1];
        *(_OWORD *)v11 = *v10;
        v13 = v10[2];
        *((_OWORD *)v11 + 1) = v12;
        v14 = v10[3];
        *((_OWORD *)v11 + 2) = v13;
        v15 = v10[4];
        *((_OWORD *)v11 + 3) = v14;
        v16 = v10[5];
        *((_OWORD *)v11 + 4) = v15;
        v17 = v10[6];
        *((_OWORD *)v11 + 5) = v16;
        v18 = v10[7];
        v10 += 8;
        *((_OWORD *)v11 + 6) = v17;
        v11 += 16;
        *((_OWORD *)v11 - 1) = v18;
        --v9;
      }
      while ( v9 );
      v19 = *(void **)(a1 + 872);
      v20 = v10[1];
      *(_OWORD *)v11 = *v10;
      v21 = v10[2];
      *((_OWORD *)v11 + 1) = v20;
      v22 = v10[3];
      *((_OWORD *)v11 + 2) = v21;
      v23 = v10[4];
      *((_OWORD *)v11 + 3) = v22;
      v24 = v10[5];
      *((_OWORD *)v11 + 4) = v23;
      v25 = v10[6];
      v26 = *((_QWORD *)v10 + 14);
      *((_OWORD *)v11 + 5) = v24;
      *((_OWORD *)v11 + 6) = v25;
      v11[14] = v26;
      Buffer[109] = 0LL;
      Buffer[112] = 0LL;
      Buffer[115] = 0LL;
      Buffer[118] = 0LL;
      Buffer[122] = 0LL;
      Buffer[126] = 0LL;
      Buffer[141] = 0LL;
      if ( !v19
        || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, a2, (PHANDLE)&Buffer[109], 0, 0, 2u), v27 >= 0) )
      {
        v28 = *(void **)(a1 + 896);
        if ( !v28
          || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, a2, (PHANDLE)&Buffer[112], 0, 0, 2u), v27 >= 0) )
        {
          v29 = *(void **)(a1 + 920);
          if ( !v29
            || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, (PHANDLE)&Buffer[115], 0, 0, 2u), v27 >= 0) )
          {
            v30 = *(void **)(a1 + 944);
            if ( !v30
              || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[118], 0, 0, 2u),
                  v27 >= 0) )
            {
              v31 = *(void **)(a1 + 976);
              if ( !v31
                || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[122], 0, 0, 2u),
                    v27 >= 0) )
              {
                v32 = *(void **)(a1 + 1008);
                if ( !v32
                  || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[126], 0, 0, 2u),
                      v27 >= 0) )
                {
                  v33 = *(void **)(a1 + 1128);
                  if ( !v33
                    || (v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, (PHANDLE)&Buffer[141], 0, 0, 2u),
                        v27 >= 0) )
                  {
                    RegionSize[0] = v8;
                    v27 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
                    if ( v27 >= 0 )
                    {
                      HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
                      if ( *(_QWORD *)(a1 + 904) )
                        Buffer[113] = (char *)BaseAddress + 1144;
                      if ( *(_WORD *)(a1 + 280) )
                        Buffer[36] = (char *)BaseAddress + 296;
                      v27 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
                      if ( v27 >= 0 )
                      {
                        v34 = *(void **)(a1 + 904);
                        if ( !v34
                          || (v27 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v34, (unsigned int)v7, 0LL), v27 >= 0) )
                        {
                          v27 = 0;
                          *a3 = BaseAddress;
                          goto LABEL_44;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( BaseAddress )
      {
        RegionSize[0] = v8;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
      }
    }
  }
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
LABEL_44:
  if ( (v37 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v27;
}
