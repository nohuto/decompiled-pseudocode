/*
 * XREFs of ?xxxStubSetForegroundWindow@@YGHPAUtagWND@@@Z @ 0x7D800
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 */

BOOL __stdcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return xxxSetForegroundWindowWithOptions((unsigned int *)a1, 2, 0, 1) != 0;
}
