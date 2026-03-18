/*
 * XREFs of __GetWindowContextHelpId@4 @ 0xB559A
 * Callers:
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetWindowContextHelpId(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 176);
}
