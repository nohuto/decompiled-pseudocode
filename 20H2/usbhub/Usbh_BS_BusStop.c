/*
 * XREFs of Usbh_BS_BusStop @ 0x1C0031600
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C0003300 (UsbhReleaseBusStateLock.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003A78C (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651725140, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (int)v3 > 6 )
  {
    if ( (int)v3 <= 8 )
      goto LABEL_17;
    if ( (_DWORD)v3 != 9 )
    {
      if ( (_DWORD)v3 == 12 )
      {
        Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
        v7 = 2;
        return UsbhReleaseBusStateLock(a1, a2, v7);
      }
      goto LABEL_17;
    }
LABEL_11:
    v7 = 4;
    return UsbhReleaseBusStateLock(a1, a2, v7);
  }
  if ( (_DWORD)v3 == 6 )
    goto LABEL_17;
  v7 = 2;
  v8 = v3 - 2;
  if ( !v8 )
  {
    v7 = 6;
    return UsbhReleaseBusStateLock(a1, a2, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v7 = 3;
        return UsbhReleaseBusStateLock(a1, a2, v7);
      }
LABEL_17:
      v7 = v6;
      return UsbhReleaseBusStateLock(a1, a2, v7);
    }
    goto LABEL_11;
  }
  return UsbhReleaseBusStateLock(a1, a2, v7);
}
