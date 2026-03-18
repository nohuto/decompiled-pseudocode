/*
 * XREFs of ?xxxShowOwnedPopups@@YGHPAUtagWND@@H@Z @ 0xF50DE
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 * Callees:
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 */

int __stdcall xxxShowOwnedPopups(struct tagWND *a1, int a2)
{
  xxxShowOwnedWindows(a1, 2 * (a2 != 0) + 1, 0);
  return 1;
}
