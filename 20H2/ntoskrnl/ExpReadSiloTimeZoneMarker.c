/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1405CF6D8
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094DBAC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1405CF708 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
