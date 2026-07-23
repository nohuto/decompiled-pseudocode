/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A01E0
 * Callers:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 *     TpSetPoolMaxThreads @ 0x180061620 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180061690 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180061734 (TpAllocPoolInternal.c)
 *     TpCallbackIndependent @ 0x1800621F0 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x180063BD0 (TpTrimPools.c)
 *     TpSetPoolStackInformation @ 0x18006FA30 (TpSetPoolStackInformation.c)
 *     TpCallbackMayRunLong @ 0x18006FE70 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080FC0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180083410 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180085730 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x180111B50 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111C00 (TppAdjustRunningThreadGoalWithLock.c)
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
