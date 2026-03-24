/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x1406DD16C
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1406DCD5C (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // esi
  void *v11; // r15
  struct _KTHREAD *v12; // rax
  char v13; // dl
  __int64 v14; // xmm0_8
  unsigned int v15; // ebp
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // r9d
  unsigned int v19; // esi
  char *v20; // r15
  char *v21; // rdx
  int v22; // r12d
  __int64 v23; // r8
  struct _KTHREAD *v24; // rax
  unsigned int v26; // ecx
  char *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 i; // rax
  __int64 v31; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-A8h] BYREF
  char *PoolWithTag; // [rsp+20h] [rbp-88h]
  char *v34; // [rsp+28h] [rbp-80h]
  volatile signed __int64 *v35; // [rsp+30h] [rbp-78h]
  int v36; // [rsp+40h] [rbp-68h]
  int v37; // [rsp+48h] [rbp-60h]
  PVOID P[2]; // [rsp+50h] [rbp-58h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  char v40; // [rsp+B0h] [rbp+8h]
  __int64 v41; // [rsp+B0h] [rbp+8h]
  char v42; // [rsp+B8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 128);
  v35 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v13 = -1;
      v14 = *(_QWORD *)(a2 + 16);
      *(_OWORD *)P = *(_OWORD *)a2;
      v39 = v14;
      v40 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v15 = 1 << v40;
      v16 = -1;
      v17 = 1 << v40;
      if ( 1 << v40 )
      {
        do
        {
          ++v16;
          v17 >>= 1;
        }
        while ( v17 );
      }
      v18 = v16 + 1;
      if ( ((v15 - 1) & v15) == 0 )
        v18 = v16;
      v42 = v18;
      v19 = v10 >> v18;
      if ( ((v19 - 1) & v19) != 0 )
      {
        for ( ; v19; v19 >>= 1 )
          ++v13;
        v19 = 1 << v13;
      }
      v37 = 0;
      v36 = v18;
      memset(v11, 0, (unsigned __int64)v19 << v18);
      v20 = (char *)P[0];
      v21 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v40);
      v34 = v21;
      if ( P[0] < v21 )
      {
        v22 = 0;
        do
        {
          v23 = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            if ( !a5 )
              goto LABEL_26;
            v26 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v26) == v23 )
                break;
              ++v26;
            }
            while ( v26 < a4 );
            if ( v26 >= a4 )
            {
LABEL_26:
              if ( v19 )
              {
                v28 = v19 - 1;
                v29 = 0LL;
                v41 = *(_QWORD *)v20;
                for ( i = 37
                        * (BYTE6(v41)
                         + 37
                         * (BYTE5(v41)
                          + 37
                          * (BYTE4(v41)
                           + 37
                           * (BYTE3(v41) + 37
                                         * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                        + (unsigned int)HIBYTE(v41); ; i = v19 - 1 )
                {
                  v31 = i & v28;
                  v27 = &PoolWithTag[v31 << v42];
                  if ( !*(_QWORD *)v27 || *(_QWORD *)v27 == v23 )
                    break;
                  if ( !v29 )
                  {
                    v29 = 2654435761LL * v23 + 1;
                    if ( ((-79 * (_BYTE)v23) & 1) != 0 )
                      v29 = 2654435761LL * v23;
                  }
                  v28 = v29 + v31;
                }
              }
              else
              {
                v27 = 0LL;
              }
              memmove(v27, v20, v15);
              v21 = v34;
              v37 = ++v22;
            }
          }
          v20 += v15;
        }
        while ( v20 < v21 );
        v8 = v35;
      }
      *(_QWORD *)a2 = PoolWithTag;
      *(_DWORD *)(a2 + 16) = v37;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      _InterlockedOr(v32, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)a3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v9;
}
