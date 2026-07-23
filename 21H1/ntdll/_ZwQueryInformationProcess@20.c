/*
 * XREFs of _ZwQueryInformationProcess@20 @ 0x4B2F2AF0
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     _RtlDecodePointer@4 @ 0x4B2E4D40 (_RtlDecodePointer@4.c)
 *     _RtlEncodePointer@4 @ 0x4B2E5700 (_RtlEncodePointer@4.c)
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _RtlSetUnhandledExceptionFilter@4 @ 0x4B2EC0E0 (_RtlSetUnhandledExceptionFilter@4.c)
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 *     _RtlSetUserCallbackExceptionFilter@4 @ 0x4B2EC460 (_RtlSetUserCallbackExceptionFilter@4.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     LdrpQueryInformationCurrentProcess @ 0x4B32F4C0 (LdrpQueryInformationCurrentProcess.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpMapCleanModuleView@4 @ 0x4B334528 (_LdrpMapCleanModuleView@4.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlWow64GetSharedInfoProcess@12 @ 0x4B33A200 (_RtlWow64GetSharedInfoProcess@12.c)
 *     _RtlDecodeRemotePointer@12 @ 0x4B33A320 (_RtlDecodeRemotePointer@12.c)
 *     _RtlEncodeRemotePointer@12 @ 0x4B33A370 (_RtlEncodeRemotePointer@12.c)
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 *     _WerpIsDebugPortPresent@0 @ 0x4B33B23B (_WerpIsDebugPortPresent@0.c)
 *     _WerpIsProcessNative@4 @ 0x4B33B266 (_WerpIsProcessNative@4.c)
 *     _WerpProcessId@4 @ 0x4B33B2CF (_WerpProcessId@4.c)
 *     _SetAssertBufferPtrinPeb@4 @ 0x4B33B4C3 (_SetAssertBufferPtrinPeb@4.c)
 *     _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880 (_RtlpNotOwnerCriticalSection@4.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 *     _RtlSetProcessIsCritical @ 0x4B362FD0 (_RtlSetProcessIsCritical.c)
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlpCallUserCallbackExceptionFilter@8 @ 0x4B3665CC (_RtlpCallUserCallbackExceptionFilter@8.c)
 *     __FinalExceptionHandler@16 @ 0x4B3666F1 (__FinalExceptionHandler@16.c)
 *     _RtlpInitRandomExVector@12 @ 0x4B36A020 (_RtlpInitRandomExVector@12.c)
 *     _RtlpGetModifiedProcessCookie@0 @ 0x4B36D769 (_RtlpGetModifiedProcessCookie@0.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 *     _PsspCaptureProcessInformation@12 @ 0x4B38727C (_PsspCaptureProcessInformation@12.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     PsspDumpObject_Process @ 0x4B387FC0 (PsspDumpObject_Process.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  return ((int (*)(void))__readfsdword(0xC0u))();
}
