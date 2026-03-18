/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C029FC54
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149E64 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C016F83C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64); // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 11);
  if ( Current && (v6 = (void (__fastcall *)(__int64))*((_QWORD *)Current + 46)) != 0LL )
  {
    LOBYTE(v5) = v2;
    v6(v5);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
