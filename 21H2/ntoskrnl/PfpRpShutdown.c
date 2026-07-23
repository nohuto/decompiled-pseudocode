/*
 * XREFs of PfpRpShutdown @ 0x1408E07F8
 * Callers:
 *     PfpParametersPropagate @ 0x1408E0C34 (PfpParametersPropagate.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PfpRpControlRequestReset @ 0x1407C5FB0 (PfpRpControlRequestReset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdx
  void *v8; // r10
  unsigned __int64 *v9; // rcx
  unsigned __int64 *i; // rcx
  void *v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(_QWORD **)(a1 + 8);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) == 0 )
      goto LABEL_20;
    v4 = *(_QWORD **)(a1 + 8);
  }
  v6 = v3 + 1;
  v7 = (unsigned __int64)&v4[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5];
  while ( (unsigned __int64)v6 < v7 )
  {
    v5 = *v6;
    if ( (*v6 & 1) == 0 )
      goto LABEL_20;
    ++v6;
  }
  v5 = 0LL;
LABEL_20:
  while ( v5 )
  {
    v8 = (void *)v5;
    v13 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v9 = (unsigned __int64 *)v5;
    v5 = *(_QWORD *)v5;
    if ( (v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v9;
    if ( (v5 & 1) != 0 )
    {
      for ( i = (unsigned __int64 *)(*(_QWORD *)(a1 + 8)
                                   + 8LL
                                   * ((37
                                     * (BYTE6(v13)
                                      + 37
                                      * (BYTE5(v13)
                                       + 37
                                       * (BYTE4(v13)
                                        + 37
                                        * (BYTE3(v13)
                                         + 37
                                         * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                     + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))
                                   + 8);
            (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
            ++i )
      {
        v5 = *i;
        if ( (*i & 1) == 0 )
          goto LABEL_19;
      }
      v5 = 0LL;
    }
LABEL_19:
    ExFreePoolWithTag(v8, 0);
  }
  v11 = *(void **)(a1 + 8);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 48);
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
