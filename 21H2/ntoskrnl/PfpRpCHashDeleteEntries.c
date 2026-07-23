/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x1406B444C
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1406B403C (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *v27; // rax
  unsigned int v29; // ecx
  char *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 i; // rax
  __int64 v34; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-A8h] BYREF
  char *PoolWithTag; // [rsp+20h] [rbp-88h]
  char *v37; // [rsp+28h] [rbp-80h]
  volatile signed __int64 *v38; // [rsp+30h] [rbp-78h]
  int v39; // [rsp+40h] [rbp-68h]
  int v40; // [rsp+48h] [rbp-60h]
  PVOID P[2]; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  char v43; // [rsp+B0h] [rbp+8h]
  __int64 v44; // [rsp+B0h] [rbp+8h]
  char v45; // [rsp+B8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 128);
  v38 = (volatile signed __int64 *)(a1 + 128);
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
      v42 = v14;
      v43 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v15 = 1 << v43;
      v16 = -1;
      v17 = 1 << v43;
      if ( 1 << v43 )
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
      v45 = v18;
      v19 = v10 >> v18;
      if ( ((v19 - 1) & v19) != 0 )
      {
        for ( ; v19; v19 >>= 1 )
          ++v13;
        v19 = 1 << v13;
      }
      v40 = 0;
      v39 = v18;
      memset(v11, 0, (unsigned __int64)v19 << v18);
      v20 = (char *)P[0];
      v21 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v43);
      v37 = v21;
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
            v29 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v29) == v23 )
                break;
              ++v29;
            }
            while ( v29 < a4 );
            if ( v29 >= a4 )
            {
LABEL_26:
              if ( v19 )
              {
                v31 = v19 - 1;
                v32 = 0LL;
                v44 = *(_QWORD *)v20;
                for ( i = 37
                        * (BYTE6(v44)
                         + 37
                         * (BYTE5(v44)
                          + 37
                          * (BYTE4(v44)
                           + 37
                           * (BYTE3(v44) + 37
                                         * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                        + (unsigned int)HIBYTE(v44); ; i = v19 - 1 )
                {
                  v34 = i & v31;
                  v30 = &PoolWithTag[v34 << v45];
                  if ( !*(_QWORD *)v30 || *(_QWORD *)v30 == v23 )
                    break;
                  if ( !v32 )
                  {
                    v32 = 2654435761LL * v23 + 1;
                    if ( ((-79 * (_BYTE)v23) & 1) != 0 )
                      v32 = 2654435761LL * v23;
                  }
                  v31 = v32 + v34;
                }
              }
              else
              {
                v30 = 0LL;
              }
              memmove(v30, v20, v15);
              v21 = v37;
              v40 = ++v22;
            }
          }
          v20 += v15;
        }
        while ( v20 < v21 );
        v8 = v38;
      }
      *(_QWORD *)a2 = PoolWithTag;
      *(_DWORD *)(a2 + 16) = v40;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      _InterlockedOr(v35, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)a3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
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
