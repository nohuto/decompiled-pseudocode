/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C0059A30
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusBusy @ 0x1C00312A0 (UsbhSshBusBusy.c)
 *     UsbhSshBusIdle @ 0x1C0031344 (UsbhSshBusIdle.c)
 *     UsbhFreeBusyList @ 0x1C0059638 (UsbhFreeBusyList.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  _DWORD *v5; // rbx

  Log(a1, 0x10000, 1936937840, 0LL, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v5 = FdoExt(*(_QWORD *)(a2 + 8));
  UsbhSshBusBusy(a1, a2);
  UsbhDisableTimerObject(a1, (__int64)(v5 + 800));
  UsbhSshBusIdle(a1);
  return UsbhFreeBusyList(a1);
}
