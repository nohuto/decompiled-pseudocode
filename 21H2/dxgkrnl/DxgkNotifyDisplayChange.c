/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C034961C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01EDEC0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax

  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current && (v7 = *((_QWORD *)Current + 11)) != 0 && (v8 = *(void (__fastcall **)(__int64))(v7 + 368)) != 0LL )
  {
    LOBYTE(v6) = v4;
    v8(v6);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v12 = PsGetCurrentProcessSessionId(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the DxgkEng function table for session 0x%I64x, returning 0x%I64x.",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
