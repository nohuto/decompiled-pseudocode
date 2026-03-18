/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z @ 0x17198D (-IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D (-ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0xF4E24 (_anonymous_namespace_--EligibleWindow.c)
 */

bool __fastcall ShellWindowManagement::WindowSubjectToBehavior(int a1, unsigned __int8 a2)
{
  bool result; // al
  int v5; // ecx
  BOOL v6; // edx

  result = ShellWindowManagement::BehaviorEnabled(*(_DWORD *)(a1 + 12), a2);
  if ( result )
  {
    v6 = 0;
    if ( (*(_DWORD *)(v5 + 204) & 0x10000000) != 0 )
      v6 = (a2 & 0xC) != 0;
    return anonymous_namespace_::EligibleWindow((struct tagWND *)a1, v6);
  }
  return result;
}
