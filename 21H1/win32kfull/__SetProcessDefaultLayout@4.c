/*
 * XREFs of __SetProcessDefaultLayout@4 @ 0x142200
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SetProcessDefaultLayout(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  else
  {
    *(_DWORD *)(PsGetCurrentProcessWin32Process() + 468) = a1;
    return 1;
  }
}
