/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1409F8018
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76FC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1409F8048 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
