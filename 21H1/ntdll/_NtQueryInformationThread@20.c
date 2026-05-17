/*
 * XREFs of _NtQueryInformationThread@20 @ 0x4B2F2BD0
 * Callers:
 *     _RtlGetThreadWorkOnBehalfTicket@8 @ 0x4B2A73B0 (_RtlGetThreadWorkOnBehalfTicket@8.c)
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _RtlQueryThreadProfiling@8 @ 0x4B32CD00 (_RtlQueryThreadProfiling@8.c)
 *     _DbgUiConvertStateChangeStructureWorker@12 @ 0x4B32D8B6 (_DbgUiConvertStateChangeStructureWorker@12.c)
 *     _LdrpDoDebuggerBreak@0 @ 0x4B331A37 (_LdrpDoDebuggerBreak@0.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _WerpThreadId@4 @ 0x4B33B323 (_WerpThreadId@4.c)
 *     _RtlSetThreadIsCritical @ 0x4B363040 (_RtlSetThreadIsCritical.c)
 *     PsspSampleCounters @ 0x4B386FC7 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x4B388050 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x4B38883C (PsspDumpThread.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
