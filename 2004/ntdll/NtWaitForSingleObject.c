/*
 * XREFs of NtWaitForSingleObject @ 0x18009CE90
 * Callers:
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180057EB8 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180058518 (EtwpSynchronizeWithLogger.c)
 *     RtlReportSilentProcessExit @ 0x18005DE40 (RtlReportSilentProcessExit.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800623B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x1800649B0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180064AD0 (RtlAcquireResourceExclusive.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEB30 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83C0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC220 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC390 (RtlWow64SuspendThread.c)
 *     WaitForWerSvc @ 0x1800DD624 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E43D8 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F6E50 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801022D0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
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
