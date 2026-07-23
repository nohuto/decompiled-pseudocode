/*
 * XREFs of _RtlReportException@12 @ 0x4B33A4D0
 * Callers:
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrpInitializeProcessWrapperFilter@8 @ 0x4B332F56 (_LdrpInitializeProcessWrapperFilter@8.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlpReportInvalidExceptionChain@8 @ 0x4B366649 (_RtlpReportInvalidExceptionChain@8.c)
 *     _RtlReportFatalFailure@4 @ 0x4B366A5D (_RtlReportFatalFailure@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 *     _TppReportExceptionFilter@4 @ 0x4B384919 (_TppReportExceptionFilter@4.c)
 *     _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109 (_TppWorkerpInnerExceptionFilter@12.c)
 *     _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A (_TppWorkerpOuterExceptionFilter@8.c)
 * Callees:
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 *     _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53 (_WerpBreakIntoDebuggerIfPresent@12.c)
 *     _WerpIsProcessNative@4 @ 0x4B33B266 (_WerpIsProcessNative@4.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  int *v3; // esi
  NTSTATUS v5; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  v3 = 0;
  v6 = 0;
  v7 = 0;
  if ( (Flags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord, Flags);
  if ( LdrpIsSecureProcess )
    return 0;
  if ( WerpIsProcessNative() )
  {
    v7 = -1;
    v3 = &v6;
    v6 = -300000000;
  }
  v5 = RtlReportExceptionHelper(Flags, v3);
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord, Flags);
  return v5;
}
