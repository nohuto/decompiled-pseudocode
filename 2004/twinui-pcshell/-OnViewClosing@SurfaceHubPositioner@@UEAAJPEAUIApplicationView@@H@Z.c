/*
 * XREFs of ?OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1801A6E80
 * Callers:
 *     ?OnViewClosing@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1800F18F0 (-OnViewClosing@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::OnViewClosing(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 WindowForView; // rbx

  if ( a3 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    if ( WindowForView )
    {
      if ( (int)DwmpBeginTransitionRequest(50LL) >= 0 )
      {
        DwmpTransitionWindow(WindowForView, 536870997LL);
        DwmpEndTransitionRequest(50LL);
      }
    }
  }
  return 0LL;
}
