/*
 * XREFs of _xxxGetSysMenuOffset@4 @ 0x19E62F
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 */

int __stdcall xxxGetSysMenuOffset(_DWORD *a1)
{
  int SysMenuPtr; // eax

  SysMenuPtr = xxxGetSysMenuPtr(a1);
  if ( SysMenuPtr )
    return *(_DWORD *)(SysMenuPtr + 24);
  else
    return 0;
}
