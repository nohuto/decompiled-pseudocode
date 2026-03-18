/*
 * XREFs of UsbhDropDevice @ 0x1C004C7A4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x1C004DB30 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004DC20 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x1C004E120 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004E210 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00361E8 (UsbhAssertBusLock.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003AA2C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C6A0 (UsbhBusUnlatchPdo.c)
 */

void __fastcall UsbhDropDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log(a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock(a1);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhBusUnlatchPdo(a1, a3, a2, v6, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
}
