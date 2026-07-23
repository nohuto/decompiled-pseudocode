/*
 * XREFs of PfTAccessTracingCleanup @ 0x14099B9FC
 * Callers:
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099172C (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x140273308 (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     MmSetAccessLogging @ 0x1403806A4 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409914F8 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x14099BAF4 (PfTAccessTracingInitialize.c)
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
  dword_140CEC368 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&stru_140CEC380);
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
