/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140201810
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x14085F4B4 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408ED6B4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098B2E0 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
