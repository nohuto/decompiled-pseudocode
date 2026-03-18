/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140330FF0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x1407BC4E0 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CACCC (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1408664B4 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTracePassiveCooling @ 0x1408ED388 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F45B4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 133) + 440LL);
}
