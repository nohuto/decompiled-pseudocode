/*
 * XREFs of PfTAccessTracingCleanup @ 0x14099606C
 * Callers:
 *     PfTTraceListAdd @ 0x1406630A4 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098CF24 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14037DB24 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x14098C508 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x140996164 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_140CEC0A8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&stru_140CEC0C0);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  MmEnablePeriodicAccessClearing(0);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
