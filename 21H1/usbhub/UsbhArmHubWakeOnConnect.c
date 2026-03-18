/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x1C003BA78
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010064 (UsbhArmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D554 (UsbhSetHubRemoteWake.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = (__int64)FdoExt((__int64)DeviceObject);
  v3 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    result = UsbhSetHubRemoteWake((__int64)DeviceObject, 1);
    if ( (int)result >= 0 )
      *(_DWORD *)(v3 + 2560) |= 0x80000u;
  }
  return result;
}
