/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1402515B0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x1407C0E00 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CF0FC (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x14086420C (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTracePassiveCooling @ 0x1408EACE8 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F1F14 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140999FC8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
}
