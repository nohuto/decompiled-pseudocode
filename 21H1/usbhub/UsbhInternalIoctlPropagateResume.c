/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C001C31C
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C001C2D0 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax

  v4 = FdoExt((__int64)a1);
  Usbh_SSH_Event(a1, 8u, (__int64)(v4 + 478));
  Log((__int64)a1, 32, 1734503506, (__int64)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
