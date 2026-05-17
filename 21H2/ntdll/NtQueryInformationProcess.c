/*
 * XREFs of NtQueryInformationProcess @ 0x18009D960
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
 *     LdrpQueryInformationCurrentProcess @ 0x1800CE7F0 (LdrpQueryInformationCurrentProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF530 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800D52BC (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D54B0 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DC890 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DC900 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DCAA0 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDC30 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDED4 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9110 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E9268 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x180102720 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180108208 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010B154 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x180112394 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180114B98 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x180114EEC (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180115F50 (PsspDumpObject_Process.c)
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
