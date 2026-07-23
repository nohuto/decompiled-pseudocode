/*
 * XREFs of ExpWriteSiloTimeZoneMarker @ 0x1405D1C84
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x14094B54C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall ExpWriteSiloTimeZoneMarker(unsigned __int8 a1)
{
  int ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1;
  return RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, &ValueData, 4u);
}
