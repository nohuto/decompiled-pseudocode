/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140594204
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140593E00 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402C385C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ZwQueryVirtualMemory @ 0x1403F2790 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1403F5C90 (ZwUnlockVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int *v9; // rsi
  ULONG_PTR v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // rdi
  unsigned int v17; // r12d
  PVOID *PoolWithTag; // rax
  unsigned int v19; // r15d
  unsigned int v20; // r9d
  PVOID *v21; // r10
  char *v22; // rcx
  PVOID *v23; // rdx
  __int64 v24; // r11
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // r15d
  PVOID v28; // rcx
  _BYTE *v29; // rdx
  bool v30; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-30h]
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v38; // [rsp+48h] [rbp-8h]
  unsigned int v41; // [rsp+B0h] [rbp+60h]

  v6 = a1;
  v7 = a4;
  v9 = a2;
  BaseAddress = 0LL;
  v10 = a1 + 6024;
  v38 = a1 + 6024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v6 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  v14 = a6;
  v15 = *(_DWORD *)(v6 + 6208);
  RegionSize = v15;
  if ( a6 )
  {
    v17 = v15 >> 12;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7 * v17, 0x71576D73u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v19 = 0;
      v20 = 0;
      if ( (_DWORD)v7 )
      {
        v21 = a3;
        do
        {
          v22 = (char *)*v21;
          ++v20;
          BaseAddress = *v21;
          if ( v19 < v17 * v20 )
          {
            v23 = &PoolWithTag[2 * v19];
            v24 = v17 * v20 - v19;
            v19 = v17 * v20;
            do
            {
              *v23 = v22;
              v23 += 2;
              v22 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v24;
            }
            while ( v24 );
          }
          ++v21;
        }
        while ( v20 < (unsigned int)v7 );
        v14 = a6;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *PoolWithTag,
             MemoryWorkingSetExInformation,
             PoolWithTag,
             16 * v7 * v17,
             0LL) >= 0 )
      {
        v25 = 0;
        v26 = 0;
        v41 = 0;
        if ( (_DWORD)v7 )
        {
          v27 = v17;
          do
          {
            v28 = 0LL;
            BaseAddress = 0LL;
            if ( v26 < v27 )
            {
              v29 = P;
              do
              {
                if ( (v29[16 * v26 + 8] & 1) != 0 )
                {
                  v30 = (*v14)-- == 1LL;
                  v28 = *a3;
                  BaseAddress = *a3;
                  if ( v30 )
                    break;
                }
                ++v26;
              }
              while ( v26 < v27 );
              if ( v28 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
              v25 = v41;
            }
            if ( !*v14 )
              break;
            ++v25;
            v27 += v17;
            ++a3;
            v41 = v25;
          }
          while ( v25 < (unsigned int)v7 );
          v10 = v38;
        }
      }
      else
      {
        *v14 = 0LL;
      }
      ExFreePoolWithTag(P, 0);
      v6 = a1;
    }
    else
    {
      *a6 = 0LL;
    }
    v9 = a2;
  }
  else if ( (_DWORD)v7 )
  {
    v16 = v7;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      ++a3;
      --v16;
    }
    while ( v16 );
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v10, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *v9++, v32, v33, MemoryInformationLength, 2u);
      --v7;
    }
    while ( v7 );
  }
}
