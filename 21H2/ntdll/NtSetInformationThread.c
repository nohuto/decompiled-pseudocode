/*
 * XREFs of NtSetInformationThread @ 0x18009D7E0
 * Callers:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180020500 (RtlSetThreadWorkOnBehalfTicket.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerSwitchNode @ 0x18004E904 (TppWorkerSwitchNode.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x18004EDB4 (TppCritResetThread.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180068AA0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x180071160 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x1800771E0 (RtlpTpTimerCallback.c)
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078430 (RtlImpersonateSelfEx.c)
 *     RtlpTpWaitCallback @ 0x180079620 (RtlpTpWaitCallback.c)
 *     RtlReleasePrivilege @ 0x1800814A0 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x1800896D0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CBF10 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CBF80 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DC350 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DD830 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F7760 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F7828 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationThread()
{
  __int64 result; // rax

  result = 13LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
