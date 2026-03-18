/*
 * XREFs of PsTerminateProcess @ 0x1406DC8DC
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14052A830 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x14062809C (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1406BBD00 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406C8540 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C6AE4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14090D0EC (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409176B0 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x14095FC94 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406995B8 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
