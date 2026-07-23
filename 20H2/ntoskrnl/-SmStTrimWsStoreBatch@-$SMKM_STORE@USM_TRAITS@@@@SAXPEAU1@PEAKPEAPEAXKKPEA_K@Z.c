/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140598394
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140597F90 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403570D8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ZwQueryVirtualMemory @ 0x1403F85D0 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1403FBAF0 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _QWORD *v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rdi
  unsigned int v14; // r12d
  PVOID *PoolWithTag; // rax
  unsigned int v16; // r15d
  unsigned int v17; // r9d
  PVOID *v18; // r10
  char *v19; // rcx
  PVOID *v20; // rdx
  __int64 v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // r15d
  PVOID v25; // rcx
  _BYTE *v26; // rdx
  bool v27; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-30h]
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v35; // [rsp+48h] [rbp-8h]
  unsigned int v38; // [rsp+B0h] [rbp+60h]

  v6 = a1;
  v7 = a4;
  v9 = a2;
  BaseAddress = 0LL;
  v10 = a1 + 6024;
  v35 = a1 + 6024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v6 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v11 = a6;
  v12 = *(_DWORD *)(v6 + 6208);
  RegionSize = v12;
  if ( a6 )
  {
    v14 = v12 >> 12;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7 * v14, 0x71576D73u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = 0;
      v17 = 0;
      if ( (_DWORD)v7 )
      {
        v18 = a3;
        do
        {
          v19 = (char *)*v18;
          ++v17;
          BaseAddress = *v18;
          if ( v16 < v14 * v17 )
          {
            v20 = &PoolWithTag[2 * v16];
            v21 = v14 * v17 - v16;
            v16 = v14 * v17;
            do
            {
              *v20 = v19;
              v20 += 2;
              v19 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v21;
            }
            while ( v21 );
          }
          ++v18;
        }
        while ( v17 < (unsigned int)v7 );
        v11 = a6;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *PoolWithTag,
             MemoryWorkingSetExInformation,
             PoolWithTag,
             16 * v7 * v14,
             0LL) >= 0 )
      {
        v22 = 0;
        v23 = 0;
        v38 = 0;
        if ( (_DWORD)v7 )
        {
          v24 = v14;
          do
          {
            v25 = 0LL;
            BaseAddress = 0LL;
            if ( v23 < v24 )
            {
              v26 = P;
              do
              {
                if ( (v26[16 * v23 + 8] & 1) != 0 )
                {
                  v27 = (*v11)-- == 1LL;
                  v25 = *a3;
                  BaseAddress = *a3;
                  if ( v27 )
                    break;
                }
                ++v23;
              }
              while ( v23 < v24 );
              if ( v25 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
              v22 = v38;
            }
            if ( !*v11 )
              break;
            ++v22;
            v24 += v14;
            ++a3;
            v38 = v22;
          }
          while ( v22 < (unsigned int)v7 );
          v10 = v35;
        }
      }
      else
      {
        *v11 = 0LL;
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
    v13 = v7;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      ++a3;
      --v13;
    }
    while ( v13 );
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v10, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *v9++, v29, v30, MemoryInformationLength, 2u);
      --v7;
    }
    while ( v7 );
  }
}
