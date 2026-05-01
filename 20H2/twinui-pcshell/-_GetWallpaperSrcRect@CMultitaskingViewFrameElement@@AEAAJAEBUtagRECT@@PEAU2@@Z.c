/*
 * XREFs of ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1803AB87C
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x1803AADC4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1803AB940 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::_GetWallpaperSrcRect(
        HWND *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  HMONITOR v5; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = MonitorFromWindow(this[58], 0);
  if ( v5 == (HMONITOR)-1LL )
  {
    v7 = 778LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v6);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v7 = 780LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v6);
  }
  IntersectRect(a3, a2, &mi.rcWork);
  return 0LL;
}
