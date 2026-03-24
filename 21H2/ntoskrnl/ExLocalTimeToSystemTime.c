/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1402B5530
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140863E24 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F1DB4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098FDE4 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
}
