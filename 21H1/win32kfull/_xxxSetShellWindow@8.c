/*
 * XREFs of _xxxSetShellWindow@8 @ 0xE0F54
 * Callers:
 *     _NtUserSetShellWindowEx@8 @ 0xE0E32 (_NtUserSetShellWindowEx@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CleanupIAMAccess@4 @ 0xAC54A (_CleanupIAMAccess@4.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     _DwmAsyncShellWindowChange@12 @ 0xE105C (_DwmAsyncShellWindowChange@12.c)
 *     _xxxGenerateIAMKey@4 @ 0xE10C8 (_xxxGenerateIAMKey@4.c)
 */

int __thiscall xxxSetShellWindow(struct tagTHREADINFO *this)
{
  int *v2; // edi
  int *v3; // ebx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  void *v10; // eax
  int v12; // [esp-Ch] [ebp-20h]

  v2 = *(int **)(*((_DWORD *)this + 2) + 252);
  v3 = v2 + 21;
  if ( v2[21] )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  v4 = *((_DWORD *)this + 5);
  if ( (*(_BYTE *)(v4 + 23) & 0xC0) == 0x40 || *((_DWORD *)this + 16) || (*(_BYTE *)(v4 + 16) & 8) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  _RegisterHotKey(this, 0, (struct tagTHREADINFO *)0xF130, 2u, 0x1Bu);
  v6 = *(_DWORD *)(*((_DWORD *)this + 2) + 232);
  if ( v6 && (!v2[22] || (*(_DWORD *)(v6 + 464) & 0x30) == 0x20) )
    v2[22] = v6;
  v7 = *v2;
  *(_DWORD *)(v7 + 12) = *((_DWORD *)this + 6);
  HMAssignmentLock(v7, v5);
  CleanupIAMAccess(*(struct _LIST_ENTRY **)(_gptiCurrent + 248));
  xxxGenerateIAMKey(*(_DWORD *)(_gptiCurrent + 248), v2 + 21, this);
  if ( IsWindowDesktopComposed(this) )
  {
    v12 = ***(_DWORD ***)(*((_DWORD *)this + 3) + 4);
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v10, v12);
  }
  HMAssignmentLock(v9, v8);
  SetOrClrWF(1, *v3, 0x420u, 1);
  xxxSetWindowPos(*v3, 1, 0, 0, 0, 0, 19);
  return 1;
}
