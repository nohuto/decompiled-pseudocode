/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A0480
 * Callers:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     TpSetPoolMaxThreads @ 0x180061730 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800617A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180061844 (TpAllocPoolInternal.c)
 *     TpCallbackIndependent @ 0x180062300 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x180063CE0 (TpTrimPools.c)
 *     TpSetPoolStackInformation @ 0x18006FB30 (TpSetPoolStackInformation.c)
 *     TpCallbackMayRunLong @ 0x18006FF70 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800810C0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180083510 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180085830 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x180112060 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180112110 (TppAdjustRunningThreadGoalWithLock.c)
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

  result = 415;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
