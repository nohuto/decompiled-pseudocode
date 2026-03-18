/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1403413B0
 * Callers:
 *     ExpRefreshSystemTime @ 0x140792748 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140860808 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408EE9A4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098CDE4 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
}
