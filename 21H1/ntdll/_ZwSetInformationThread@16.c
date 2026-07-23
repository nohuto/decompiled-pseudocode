/*
 * XREFs of _ZwSetInformationThread@16 @ 0x4B2F2A30
 * Callers:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 *     _TppWorkerSwitchNode@16 @ 0x4B2B6D51 (_TppWorkerSwitchNode@16.c)
 *     _RtlSetThreadWorkOnBehalfTicket@4 @ 0x4B2B7140 (_RtlSetThreadWorkOnBehalfTicket@4.c)
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _RtlClearThreadWorkOnBehalfTicket@0 @ 0x4B2E6710 (_RtlClearThreadWorkOnBehalfTicket@0.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _RtlDisableThreadProfiling@4 @ 0x4B32CBD0 (_RtlDisableThreadProfiling@4.c)
 *     _RtlEnableThreadProfiling@20 @ 0x4B32CC20 (_RtlEnableThreadProfiling@20.c)
 *     _WerReportExceptionWorker@4 @ 0x4B33AE10 (_WerReportExceptionWorker@4.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 *     _RtlReleasePrivilege@4 @ 0x4B346D00 (_RtlReleasePrivilege@4.c)
 *     _RtlSetThreadIsCritical @ 0x4B363040 (_RtlSetThreadIsCritical.c)
 *     _RtlpTpTimerCallback@12 @ 0x4B385320 (_RtlpTpTimerCallback@12.c)
 *     _RtlpTpImpersonate@4 @ 0x4B385B57 (_RtlpTpImpersonate@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  return Wow64SystemServiceCall();
}
