/*
 * XREFs of _ZwWaitForSingleObject@12 @ 0x4B2F29A0
 * Callers:
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _RtlAcquireResourceShared@8 @ 0x4B2EB3B0 (_RtlAcquireResourceShared@8.c)
 *     _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0 (_RtlAcquireResourceExclusive@8.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _WaitForWerSvc@4 @ 0x4B33AD78 (_WaitForWerSvc@4.c)
 *     _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0 (_RtlWaitForWnfMetaNotification@24.c)
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlpRtlpCtWaitForWnfQuiescentWorker@12 @ 0x4B369F90 (_RtlpRtlpCtWaitForWnfQuiescentWorker@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  return Wow64SystemServiceCall();
}
