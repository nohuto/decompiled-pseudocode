/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C00161A8
 * Callers:
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C001620C (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C0016254 (RIMGetCurrentPowerInputMode.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0164C20 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01829AC (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(_DWORD *a1)
{
  char v2; // al
  unsigned int v3; // eax

  v2 = isChildPartition();
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
