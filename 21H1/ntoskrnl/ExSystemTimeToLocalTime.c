/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140322820
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x1407AB440 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407B92CC (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x14085F744 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTracePassiveCooling @ 0x1408E64F8 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408ED6B4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
