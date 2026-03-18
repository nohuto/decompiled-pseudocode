/*
 * XREFs of _xxxDrawMenuBar@4 @ 0xC2E24
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 */

int __stdcall xxxDrawMenuBar(int a1)
{
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0) != 0x40 )
    xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 55);
  return 1;
}
