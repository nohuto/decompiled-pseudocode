/*
 * XREFs of ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C011D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

_BOOL8 __fastcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 1LL) != 0;
}
