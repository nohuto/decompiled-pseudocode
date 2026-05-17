/*
 * XREFs of EtwEventRegister @ 0x180042EC0
 * Callers:
 *     SbSelectProcedure @ 0x18003E120 (SbSelectProcedure.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045ADC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060158 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x18007E984 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB8E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB968 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF570 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180043080 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
