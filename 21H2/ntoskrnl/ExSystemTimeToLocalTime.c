/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1402D3270
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x1407C08E0 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEF8C (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1408640B4 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTracePassiveCooling @ 0x1408EAB88 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F1DB4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140998FC8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
}
