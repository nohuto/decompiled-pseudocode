/*
 * XREFs of _RegisterLPK@4 @ 0xA8AEA
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RegisterLPK(int a1)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process() + 412) = a1;
  return 1;
}
