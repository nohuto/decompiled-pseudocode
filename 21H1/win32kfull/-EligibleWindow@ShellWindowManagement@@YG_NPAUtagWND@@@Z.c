/*
 * XREFs of ?EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E7E
 * Callers:
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::EligibleWindow @ 0xF4E24 (_anonymous_namespace_--EligibleWindow.c)
 */

bool __thiscall ShellWindowManagement::EligibleWindow(struct tagWND *ecx0)
{
  return anonymous_namespace_::EligibleWindow(ecx0, 0);
}
