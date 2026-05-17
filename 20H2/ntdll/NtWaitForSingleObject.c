/*
 * XREFs of NtWaitForSingleObject @ 0x18009D130
 * Callers:
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180057F08 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180058568 (EtwpSynchronizeWithLogger.c)
 *     RtlReportSilentProcessExit @ 0x18005DF50 (RtlReportSilentProcessExit.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800624C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x180063480 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180064AC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180064BE0 (RtlAcquireResourceExclusive.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8760 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC5C0 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC730 (RtlWow64SuspendThread.c)
 *     WaitForWerSvc @ 0x1800DD9C4 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E4828 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F7360 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801027E0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
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
