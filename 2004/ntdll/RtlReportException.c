/*
 * XREFs of RtlReportException @ 0x1800DC950
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrpProcessDetachNode @ 0x18006A8C4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006C014 (LdrpInitializeNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF630 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D40CC (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 *     RtlReportFatalFailure @ 0x1800FF190 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1801005D0 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x1801121AC (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180112AF8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112B7C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800DCEF0 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD87C (WerpBreakIntoDebuggerIfPresent.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v3 = 1;
    v11 = -300000000LL;
  }
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
