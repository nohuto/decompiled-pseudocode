/*
 * XREFs of NtSetInformationThread @ 0x18009D250
 * Callers:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180020500 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A5C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerSwitchNode @ 0x180054314 (TppWorkerSwitchNode.c)
 *     TppCritSetThread @ 0x180054474 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800547C4 (TppCritResetThread.c)
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800675B0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x180070130 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x1800761B0 (RtlpTpTimerCallback.c)
 *     RtlAcquirePrivilege @ 0x180077180 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180077400 (RtlImpersonateSelfEx.c)
 *     RtlpTpWaitCallback @ 0x1800785F0 (RtlpTpWaitCallback.c)
 *     RtlReleasePrivilege @ 0x180080B80 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x1800890D0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CBF50 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CBFC0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DC5A0 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DDA80 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F78D0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F7998 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
