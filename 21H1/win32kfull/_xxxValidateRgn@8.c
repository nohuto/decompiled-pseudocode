/*
 * XREFs of _xxxValidateRgn@8 @ 0xC499A
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 */

int __stdcall xxxValidateRgn(int a1, int a2)
{
  return xxxRedrawWindow(a1, 0, a2, 8);
}
