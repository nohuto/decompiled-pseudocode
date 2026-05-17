/*
 * XREFs of NtWaitForSingleObject @ 0x18009D6C0
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
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CECD0 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8510 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC370 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC4E0 (RtlWow64SuspendThread.c)
 *     WaitForWerSvc @ 0x1800DD774 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E46B8 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F71F0 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102680 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
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
