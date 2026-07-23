/*
 * XREFs of _ZwTerminateThread@8 @ 0x4B2F2EB0
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     sub_4B2EB4AC @ 0x4B2EB4AC (sub_4B2EB4AC.c)
 *     _EtwpCreateEtwThread@8 @ 0x4B2F04A0 (_EtwpCreateEtwThread@8.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _WerReportExceptionWorker@4 @ 0x4B33AE10 (_WerReportExceptionWorker@4.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  return Wow64SystemServiceCall();
}
