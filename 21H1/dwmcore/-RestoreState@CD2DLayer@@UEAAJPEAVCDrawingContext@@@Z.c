/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800A3360
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x1800A3470 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 v4; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start,
      a3,
      1u,
      &v6);
  CD2DContext::PopLayer(
    (CD2DContext *)(*((_QWORD *)a2 + 5) + 16LL),
    (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop,
      v4,
      1u,
      &v6);
  return 0LL;
}
