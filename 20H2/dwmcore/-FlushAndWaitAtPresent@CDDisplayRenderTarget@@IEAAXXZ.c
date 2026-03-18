/*
 * XREFs of ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018BAB4
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018BD20 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x18023D9F4 (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 */

void __fastcall CDDisplayRenderTarget::FlushAndWaitAtPresent(CDDisplayRenderTarget *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  CD3DDevice::SignalRenderFence(*(CD3DDevice **)(*((_QWORD *)this + 21) + 88LL), CurrentFrameId);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start,
      v3,
      1u,
      &v5);
  WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 21) + 392LL), 0x64u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop,
      v4,
      1u,
      &v5);
  *((_BYTE *)this + 18623) = 0;
}
