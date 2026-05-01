/*
 * XREFs of ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18044DD74
 * Callers:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803CF648 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18044DDA0 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::CanMaximizeView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v2; // bl
  ApplicationViewHelpers *WindowForView; // rax
  HWND v4; // rdx

  v2 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v4);
  return v2;
}
