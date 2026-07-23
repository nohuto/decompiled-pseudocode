/*
 * XREFs of _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370
 * Callers:
 *     _TpSetPoolThreadBasePriority@8 @ 0x4B2ABA70 (_TpSetPoolThreadBasePriority@8.c)
 *     _TpSetPoolWorkerThreadIdleTimeout@12 @ 0x4B2AEB80 (_TpSetPoolWorkerThreadIdleTimeout@12.c)
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _TpCallbackIndependent@4 @ 0x4B2B5760 (_TpCallbackIndependent@4.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _TpCallbackMayRunLong@4 @ 0x4B2E9600 (_TpCallbackMayRunLong@4.c)
 *     _TpSetPoolMaxThreadsSoftLimit@8 @ 0x4B2EBEA0 (_TpSetPoolMaxThreadsSoftLimit@8.c)
 *     _TpSetPoolMinThreads@8 @ 0x4B2ED0C0 (_TpSetPoolMinThreads@8.c)
 *     _TpSetPoolStackInformation@8 @ 0x4B2ED670 (_TpSetPoolStackInformation@8.c)
 *     _TpSetPoolThreadCpuSets@12 @ 0x4B383E50 (_TpSetPoolThreadCpuSets@12.c)
 *     _TpTrimPools@0 @ 0x4B383ED0 (_TpTrimPools@0.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  return Wow64SystemServiceCall();
}
