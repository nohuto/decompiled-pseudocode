/*
 * XREFs of __SetWindowContextHelpId@8 @ 0xA76EE
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     <none>
 */

int __stdcall _SetWindowContextHelpId(int a1, int a2)
{
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 176) = a2;
  return 1;
}
