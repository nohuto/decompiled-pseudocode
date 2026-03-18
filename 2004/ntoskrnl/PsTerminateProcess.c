/*
 * XREFs of PsTerminateProcess @ 0x14065797C
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140526E60 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x14060283C (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     PspProcessClose @ 0x1406E4E40 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406F54B0 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140881740 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C0CA4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x1409074CC (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x140911B70 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140959ED4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406B3CF4 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
