/*
 * XREFs of ?GetInsertAfterWindowFromForegroundWindow@CDesktopPositioner@@AEAAPEAUHWND__@@XZ @ 0x1803EB9AC
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18003EB20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CDesktopPositioner::GetInsertAfterWindowFromForegroundWindow(CDesktopPositioner *this)
{
  __int64 v1; // rdi
  HWND ForegroundWindow; // rax
  HWND v3; // rsi
  HWND Ancestor; // rbx

  v1 = -2LL;
  ForegroundWindow = GetForegroundWindow();
  v3 = ForegroundWindow;
  if ( ForegroundWindow )
  {
    Ancestor = GetAncestor(ForegroundWindow, 3u);
    if ( !Ancestor )
      Ancestor = v3;
    if ( (GetWindowLongPtrW(Ancestor, -20) & 8) == 0 )
      return Ancestor;
  }
  return (HWND)v1;
}
