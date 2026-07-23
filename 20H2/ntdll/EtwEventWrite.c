/*
 * XREFs of EtwEventWrite @ 0x18004F1F0
 * Callers:
 *     SbSelectProcedure @ 0x18003E120 (SbSelectProcedure.c)
 *     EtwEventWriteEndScenario @ 0x18004EC20 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060158 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x180089E00 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB8E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB968 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF570 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x180108A18 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x180108A94 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x180113A88 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18004F278 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWrite(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(RegHandle, (_DWORD)EventDescriptor, 0, 0, 0, 0LL, 0LL, UserDataCount, (__int64)UserData);
}
