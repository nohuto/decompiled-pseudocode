/*
 * XREFs of _NtUserRegisterPointerInputTarget@16 @ 0x1680FD
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __RegisterPointerInputTarget@16 @ 0x15BE8C (__RegisterPointerInputTarget@16.c)
 */

int __stdcall NtUserRegisterPointerInputTarget(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  _DWORD *v5; // edi
  int v6; // eax

  v4 = 0;
  EnterCrit(0, 1);
  v5 = (_DWORD *)ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned __int8)Enforced() && *(int *)(*(_DWORD *)(_gptiCurrent + 232) + 8) >= 0 )
    {
      UserSetLastError((struct _NT_TIB *)5);
      EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 12);
    }
    else if ( _gptiCurrent == v5[2] )
    {
      if ( (!a4 || (v6 = v5[5], *(char *)(v6 + 12) >= 0) && *(char *)(v6 + 11) >= 0) && (a3 == 2 || a3 == 3) )
        v4 = _RegisterPointerInputTarget(v5, a3, a4);
      else
        UserSetLastError((struct _NT_TIB *)0x57);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
