/*
 * XREFs of ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180183E24
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BAFA8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x18023D9F4 (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 */

void __fastcall CLegacyRenderTarget::FlushAndWaitAtPresent(CLegacyRenderTarget *this)
{
  __int64 v2; // rcx
  unsigned __int64 CurrentFrameId; // rax
  CD3DDevice *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 20) + 8LL) + 12LL) + *((_QWORD *)this + 20) + 8LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CurrentFrameId = GetCurrentFrameId();
  CD3DDevice::SignalRenderFence(v4, CurrentFrameId);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start,
      v5,
      1u,
      &v7);
  WaitForSingleObject(*((HANDLE *)this + 2322), 0x64u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop,
      v6,
      1u,
      &v7);
  *((_BYTE *)this + 18589) = 0;
}
