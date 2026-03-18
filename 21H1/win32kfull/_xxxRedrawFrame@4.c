/*
 * XREFs of _xxxRedrawFrame@4 @ 0x1A13A8
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 */

int __stdcall xxxRedrawFrame(int a1)
{
  xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 55);
  return 1;
}
