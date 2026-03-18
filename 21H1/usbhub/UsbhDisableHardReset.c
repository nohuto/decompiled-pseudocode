/*
 * XREFs of UsbhDisableHardReset @ 0x1C003CAB8
 * Callers:
 *     UsbhBusPnpStop @ 0x1C0036A00 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004204C (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C0042AE0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044420 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}
