/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140233710
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140863F7C (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F1F14 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1409908C4 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 1064) + 440LL);
}
