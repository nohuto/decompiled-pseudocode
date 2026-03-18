/*
 * XREFs of UsbhHardErrorReset1BadEnable @ 0x1C004CC80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00361E8 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorReset1BadEnable(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v6; // [rsp+28h] [rbp-30h]

  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v6);
  }
  Log(a1, 1024, 1883391045, a2, 0LL);
  UsbhCancelResetTimeout(a1, a2, 0);
  if ( v4[768] == *(unsigned __int16 *)(a2 + 4) )
  {
    UsbhAssertBusLock(a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_BAD_ENABLE);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x3Eu, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1061, 0);
  return 3LL;
}
