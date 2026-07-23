/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A0A10
 * Callers:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TpSetPoolMaxThreads @ 0x180062C20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062C90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     TpCallbackIndependent @ 0x1800637F0 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x1800651D0 (TpTrimPools.c)
 *     TpSetPoolStackInformation @ 0x180070B60 (TpSetPoolStackInformation.c)
 *     TpCallbackMayRunLong @ 0x180070FA0 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800819E0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180083C20 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180085D00 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x180111EC0 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111F70 (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 417;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
