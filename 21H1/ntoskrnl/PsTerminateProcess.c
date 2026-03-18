/*
 * XREFs of PsTerminateProcess @ 0x1406E666C
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140526810 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x14063787C (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1406C5430 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406D28E0 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140880420 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14090621C (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409107D0 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140958B34 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140709B44 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v3, v4, v5);
  return v2;
}
