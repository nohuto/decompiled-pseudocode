/*
 * XREFs of NtQueryInformationProcess @ 0x18009D130
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlUserThreadStart @ 0x180052630 (RtlUserThreadStart.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18005FF5C (LdrpLogLoadFailureEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18006083C (WerpProcessId.c)
 *     RtlDecodePointer @ 0x180069E10 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180071E40 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180078944 (RtlpCallVectoredHandlers.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079A40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F8E0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180081690 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008B9B0 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800CE650 (LdrpQueryInformationCurrentProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF390 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800D516C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5360 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DC740 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DC7B0 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DC950 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDAE0 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDD84 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E8D80 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E8ED8 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x180102370 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180107E58 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010ADA4 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x180111FE4 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x1801147E8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x180114B3C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115804 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180115BA0 (PsspDumpObject_Process.c)
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
