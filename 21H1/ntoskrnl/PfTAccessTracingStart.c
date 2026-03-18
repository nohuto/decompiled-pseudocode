/*
 * XREFs of PfTAccessTracingStart @ 0x14098C458
 * Callers:
 *     PfGetCompletedTrace @ 0x140662E14 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x1407AA59C (PfTStart.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098CF24 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14037DB24 (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x14098C508 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // rbp
  int v8; // esi
  bool v9; // zf
  int DefaultPagePriority; // eax
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = ~a3;
  v9 = (v8 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v8;
  if ( v9 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v11) = 1;
    MmEnablePeriodicAccessClearing(v11);
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
