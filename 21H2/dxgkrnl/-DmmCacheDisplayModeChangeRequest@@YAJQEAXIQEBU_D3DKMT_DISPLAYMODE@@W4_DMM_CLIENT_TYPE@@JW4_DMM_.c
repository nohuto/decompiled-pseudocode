/*
 * XREFs of ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C01C5760
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C01C2EF0 (DxgkSetDisplayMode.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0013E30 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 */

__int64 __fastcall DmmCacheDisplayModeChangeRequest(DXGADAPTER *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 349);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, *(_QWORD *)(v8 + 104));
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v9,
      a2,
      a3,
      2LL,
      a5,
      3,
      *(_DWORD *)(*((_QWORD *)a1 + 349) + 416LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
