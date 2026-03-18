/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0 (-IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     _xxxDesktopRecalc@8 @ 0xB04BC (_xxxDesktopRecalc@8.c)
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 *     ?AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E04 (-AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z @ 0x17198D (-IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D (-ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(int a1, unsigned __int8 a2)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 200) )
    return (a2 & *(_BYTE *)(a1 + 204)) != 0;
  return result;
}
