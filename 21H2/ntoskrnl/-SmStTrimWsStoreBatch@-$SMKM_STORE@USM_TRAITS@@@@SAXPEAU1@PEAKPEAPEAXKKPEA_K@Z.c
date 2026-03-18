/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405F7B94
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405F774C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140379A64 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        void **a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned int *v9; // rsi
  ULONG_PTR v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rdi
  unsigned int v16; // r15d
  PVOID *PoolWithTag; // rax
  unsigned int v18; // r12d
  unsigned int v19; // r9d
  void **v20; // r10
  void *v21; // rcx
  PVOID *v22; // rdx
  __int64 v23; // r11
  unsigned int v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // r12d
  void *v27; // rcx
  _BYTE *v28; // rdx
  struct _KTHREAD *v29; // rax
  char result; // al
  __int64 v31; // r8
  __int64 v32; // r9
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-30h]
  char *v34; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  __int64 v36; // [rsp+40h] [rbp-10h]
  ULONG_PTR v37; // [rsp+48h] [rbp-8h]
  unsigned int v40; // [rsp+B0h] [rbp+60h]

  v6 = a1;
  v7 = a4;
  v9 = a2;
  v34 = 0LL;
  v10 = a1 + 6024;
  v37 = a1 + 6024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v6 + 6024);
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v13 = a6;
  v14 = *(_DWORD *)(v6 + 6208);
  v36 = v14;
  if ( a6 )
  {
    v16 = v14 >> 12;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7 * v16, 0x71576D73u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v18 = 0;
      v19 = 0;
      if ( (_DWORD)v7 )
      {
        v20 = a3;
        do
        {
          v21 = *v20;
          ++v19;
          v34 = (char *)*v20;
          if ( v18 < v16 * v19 )
          {
            v22 = &PoolWithTag[2 * v18];
            v23 = v16 * v19 - v18;
            v18 = v16 * v19;
            do
            {
              *v22 = v21;
              v22 += 2;
              v21 = v34 + 4096;
              v34 += 4096;
              --v23;
            }
            while ( v23 );
          }
          ++v20;
        }
        while ( v19 < (unsigned int)v7 );
        v13 = a6;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *PoolWithTag,
             (MEMORY_INFORMATION_CLASS)4,
             PoolWithTag,
             16 * v7 * v16,
             0LL) >= 0 )
      {
        v24 = 0;
        v25 = 0;
        v40 = 0;
        if ( (_DWORD)v7 )
        {
          v26 = v16;
          do
          {
            v27 = 0LL;
            v34 = 0LL;
            if ( v25 < v26 )
            {
              v28 = P;
              do
              {
                if ( (v28[16 * v25 + 8] & 1) != 0 )
                {
                  v12 = (*v13)-- == 1LL;
                  v27 = *a3;
                  v34 = (char *)*a3;
                  if ( v12 )
                    break;
                }
                ++v25;
              }
              while ( v25 < v26 );
              if ( v27 )
                ZwUnlockVirtualMemory(-1LL, (__int64)&v34);
              v24 = v40;
            }
            if ( !*v13 )
              break;
            ++v24;
            v26 += v16;
            ++a3;
            v40 = v24;
          }
          while ( v24 < (unsigned int)v7 );
          v10 = v37;
        }
      }
      else
      {
        *v13 = 0LL;
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
    v15 = v7;
    do
    {
      v34 = (char *)*a3;
      ZwUnlockVirtualMemory(-1LL, (__int64)&v34);
      ++a3;
      --v15;
    }
    while ( v15 );
    v10 = v6 + 6024;
  }
  v29 = KeGetCurrentThread();
  --v29->SpecialApcDisable;
  result = ExAcquirePushLockSharedEx(v10, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *v9++, v31, v32, MemoryInformationLength, 2u);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
