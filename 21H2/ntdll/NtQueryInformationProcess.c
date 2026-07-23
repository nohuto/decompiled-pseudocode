/*
 * XREFs of NtQueryInformationProcess @ 0x18009D920
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18006155C (LdrpLogLoadFailureEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C84 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x180061E3C (WerpProcessId.c)
 *     RtlDecodePointer @ 0x18006B410 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180072F70 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB70 (RtlWow64GetSharedInfoProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180080300 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008C0B0 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800CE7B0 (LdrpQueryInformationCurrentProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF4F0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800D527C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5470 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DC850 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DC8C0 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDBF0 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDE94 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E90D0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E9228 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x1801026E0 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x1801081C8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010B114 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x180112354 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180114B58 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x180114EAC (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115B74 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180115F10 (PsspDumpObject_Process.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
