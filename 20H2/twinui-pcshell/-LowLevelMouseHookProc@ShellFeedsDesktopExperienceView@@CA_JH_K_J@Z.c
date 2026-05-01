/*
 * XREFs of ?LowLevelMouseHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800A7200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetHwnd@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800A67FC (-GetHwnd@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?NotifyFlyoutHoverState@ShellFeedsDesktopExperienceView@@CAJ_N@Z @ 0x1800A7318 (-NotifyFlyoutHoverState@ShellFeedsDesktopExperienceView@@CAJ_N@Z.c)
 */

LRESULT __fastcall ShellFeedsDesktopExperienceView::LowLevelMouseHookProc(
        ShellFeedsDesktopExperienceView *code,
        WPARAM wParam,
        LPARAM lParam)
{
  int v5; // esi
  HWND Hwnd; // rdi
  bool v7; // di
  bool v8; // al
  struct tagPOINT Point; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-40h] BYREF

  v5 = (int)code;
  if ( (int)code >= 0
    && `anonymous namespace'::g_shellFeedsExperienceView
    && (!`anonymous namespace'::g_pressedDown || wParam == 514) )
  {
    Hwnd = (HWND)ShellFeedsDesktopExperienceView::GetHwnd(code);
    if ( Hwnd )
    {
      GetCursorPos(&Point);
      GetWindowRect(Hwnd, &Rect);
      v7 = 0;
      if ( PtInRect(&Rect, Point) )
      {
        v7 = 1;
        if ( !`anonymous namespace'::g_pressedDown )
          `anonymous namespace'::g_pressedDown = wParam == 513;
      }
      ShellFeedsDesktopExperienceView::NotifyFlyoutHoverState(v7);
    }
    v8 = `anonymous namespace'::g_pressedDown;
    if ( `anonymous namespace'::g_pressedDown )
    {
      if ( wParam == 514 )
        v8 = 0;
      `anonymous namespace'::g_pressedDown = v8;
    }
  }
  return CallNextHookEx(0LL, v5, wParam, lParam);
}
