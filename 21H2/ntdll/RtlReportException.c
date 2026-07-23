/*
 * XREFs of RtlReportException @ 0x1800DCA60
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrpProcessDetachNode @ 0x18006BA04 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D154 (LdrpInitializeNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB650 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF790 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D41DC (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800DCB30 (RtlReportExceptionEx.c)
 *     RtlReportFatalFailure @ 0x1800FF500 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100940 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x18011251C (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180112E68 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112EEC (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800DD000 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD98C (WerpBreakIntoDebuggerIfPresent.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  int v3; // ebx
  NTSTATUS v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (Flags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  if ( LdrpIsSecureProcess )
    return 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v3 = 1;
    v11 = -300000000LL;
  }
  v8 = RtlReportExceptionHelper(ExceptionRecord, ContextRecord, Flags, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  return v8;
}
