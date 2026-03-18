/*
 * XREFs of Usbh_HRS_Disabled @ 0x1C003D2E4
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031838 (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_Disabled(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  switch ( (_DWORD)v3 )
  {
    case 1:
      v5 = 2;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
    case 2:
      goto LABEL_12;
    case 3:
    case 9:
      v4[640] |= 0x10u;
LABEL_12:
      v5 = 1;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  if ( (int)v3 > 9 && (int)v3 <= 11 )
    goto LABEL_12;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
