/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C00485FC
 * Callers:
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C0048660 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C00486A8 (RIMGetCurrentPowerInputMode.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C016AF70 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01886AC (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(_DWORD *a1)
{
  char v2; // al
  unsigned int v3; // eax

  v2 = isChildPartition(a1);
  a1[329] = -1;
  if ( v2 )
  {
    a1[330] = 0;
    return 0LL;
  }
  v3 = RIMGetCurrentPowerInputMode();
  a1[330] = v3;
  RIMUpdateDeviceForInputMode(a1, v3);
  if ( (a1[50] & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !gbTtmEnabled )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
