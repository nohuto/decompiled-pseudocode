/*
 * XREFs of _anonymous_namespace_::GetFocusedWindow @ 0x18034AEF4
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x180349A18 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180349B28 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

HWND anonymous_namespace_::GetFocusedWindow()
{
  HWND result; // rax
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  memset_0(&pgui, 0, sizeof(pgui));
  pgui.cbSize = 72;
  GetGUIThreadInfo(0, &pgui);
  result = pgui.hwndFocus;
  if ( !pgui.hwndFocus )
    return GetForegroundWindow();
  return result;
}
