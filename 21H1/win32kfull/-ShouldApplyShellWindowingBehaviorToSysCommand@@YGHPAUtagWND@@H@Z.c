/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 */

BOOL __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(_DWORD *a1, int a2)
{
  int v3; // esi
  int v5; // esi
  int v6; // ecx

  v3 = 0;
  if ( (a2 == 61456 || a2 == 61440) && ShellWindowManagement::WindowSubjectToBehavior((int)a1, 0xCu) )
  {
    v5 = a1[3];
    return v5
        && (v6 = *(_DWORD *)(v5 + 200)) != 0
        && !IsThreadHung(*(_DWORD **)(v6 + 8), 0)
        && CoreWindowProp::CompositeAppHasForeground(a1)
        && ShellWindowManagement::BehaviorEnabled(v5, 4 * (a2 != 61456) + 4);
  }
  return v3;
}
