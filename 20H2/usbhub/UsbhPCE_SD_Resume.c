/*
 * XREFs of UsbhPCE_SD_Resume @ 0x1C0034728
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0035BB0 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_SD_Resume(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x45u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711859, 0LL, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 13, a3, 0LL, 0, 0LL, 0LL);
}
