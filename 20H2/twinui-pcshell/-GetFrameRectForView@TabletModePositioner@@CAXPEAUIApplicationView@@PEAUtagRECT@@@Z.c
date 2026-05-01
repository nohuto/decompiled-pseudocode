/*
 * XREFs of ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1803F75D4
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180400740 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

void __fastcall TabletModePositioner::GetFrameRectForView(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a2)
{
  HWND WindowForView; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, (struct IApplicationView *)a2);
  GetWindowRect(WindowForView, a2);
  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo(WindowForView, v4) )
  {
    a2->left += (__int16)v5;
    a2->right -= SWORD1(v5);
    a2->bottom -= SHIWORD(v5);
  }
}
