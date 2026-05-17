/*
 * XREFs of NtQueryInformationProcess @ 0x18009D3D0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlUserThreadStart @ 0x180052680 (RtlUserThreadStart.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18006006C (LdrpLogLoadFailureEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18006094C (WerpProcessId.c)
 *     RtlDecodePointer @ 0x180069F20 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180071F40 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180078A44 (RtlpCallVectoredHandlers.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079B40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F9E0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008BAB0 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800CE830 (LdrpQueryInformationCurrentProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF570 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800D550C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5700 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DCAE0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DCB50 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDE80 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DE124 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9280 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E93D8 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x180102880 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180108368 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010B2B4 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x1801124F4 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180114CF8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x18011504C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115D14 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x1801160B0 (PsspDumpObject_Process.c)
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
