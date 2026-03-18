/*
 * XREFs of __RegisterPointerInputTarget@16 @ 0x15BE8C
 * Callers:
 *     _NtUserRegisterPointerInputTarget@16 @ 0x1680FD (_NtUserRegisterPointerInputTarget@16.c)
 * Callees:
 *     _UpdatePointerRedirIsAlive@4 @ 0x7188C (_UpdatePointerRedirIsAlive@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall _RegisterPointerInputTarget(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int *v5; // ecx
  int v6; // edx
  _DWORD *v7; // ecx
  _DWORD *v8; // eax

  v4 = this[3];
  if ( !v4 || (v5 = *(int **)(v4 + 4)) == 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  UpdatePointerRedirIsAlive(v5);
  v7 = (_DWORD *)(*(_DWORD *)(this[3] + 4) + 4 * (a2 != 2) + 108);
  v8 = (_DWORD *)*v7;
  if ( !a3 )
  {
    if ( v8 == this )
      HMAssignmentUnlock(v7);
    return 1;
  }
  if ( !v8 )
  {
    HMAssignmentLock(v7, v6);
    return 1;
  }
  if ( v8 == this )
    return 1;
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
