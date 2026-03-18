/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C0021C50
 * Callers:
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C0021CB4 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C0021CFC (RIMGetCurrentPowerInputMode.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C01626C0 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018046C (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(_DWORD *a1)
{
  char v2; // al
  unsigned int v3; // eax

  v2 = isChildPartition();
  a1[331] = -1;
  if ( v2 )
  {
    a1[332] = 0;
    return 0LL;
  }
  v3 = RIMGetCurrentPowerInputMode();
  a1[332] = v3;
  RIMUpdateDeviceForInputMode(a1, v3);
  if ( (a1[50] & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !gbTtmEnabled )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
