/*
 * XREFs of NtWaitForSingleObject @ 0x18009D680
 * Callers:
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18004F868 (EtwpSynchronizeWithLogger.c)
 *     RtlReportSilentProcessExit @ 0x18005F440 (RtlReportSilentProcessExit.c)
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800639B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x180064970 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065FB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660D0 (RtlAcquireResourceExclusive.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEC90 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D84D0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC330 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC4A0 (RtlWow64SuspendThread.c)
 *     WaitForWerSvc @ 0x1800DD734 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E4678 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F71B0 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102640 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
