/*
 * XREFs of NtSetInformationThread @ 0x18009CFB0
 * Callers:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180020500 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A0C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerSwitchNode @ 0x1800542C4 (TppWorkerSwitchNode.c)
 *     TppCritSetThread @ 0x180054424 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x180054774 (TppCritResetThread.c)
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800674A0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x180070030 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x1800760B0 (RtlpTpTimerCallback.c)
 *     RtlAcquirePrivilege @ 0x180077080 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180077300 (RtlImpersonateSelfEx.c)
 *     RtlpTpWaitCallback @ 0x1800784F0 (RtlpTpWaitCallback.c)
 *     RtlReleasePrivilege @ 0x180080A80 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x180088FD0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CBD70 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CBDE0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DC200 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DD6E0 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F73C0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F7488 (RtlpDetachThreadFromUmsCompletionList.c)
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
