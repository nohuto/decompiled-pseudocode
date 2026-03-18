/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0042980
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rdi
  unsigned int v5; // ecx
  int v7; // [rsp+28h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-20h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_ec3ff651113137de15f233520a661d88_Traceguids);
  if ( *((_DWORD *)v4 + 643) )
  {
    v5 = *((_DWORD *)v4 + 643);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = *((_DWORD *)v4 + 643);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_ec3ff651113137de15f233520a661d88_Traceguids,
        v7);
      v5 = *((_DWORD *)v4 + 643);
    }
    LOBYTE(v8) = 0;
    Irp->IoStatus.Information |= v5;
    Irp->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, (_DWORD)Irp + 56, 8, 0, 0, usbfile_pnp_c, 2265, v8);
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], Irp);
}
