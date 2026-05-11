/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C002C930
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x1C002C850 (USBDeviceStop.c)
 */

__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}
