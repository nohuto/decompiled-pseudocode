/*
 * XREFs of _GetKeyboardLayout @ 0x1C0076FF0
 * Callers:
 *     NtUserGetKeyboardLayout @ 0x1C0076BE0 (NtUserGetKeyboardLayout.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0077098 (ApiSetEditionGetProcessWindowStation.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rax
  _QWORD **v4; // rdi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( ApiSetEditionGetProcessWindowStation() )
  {
    if ( (_DWORD)v1 )
    {
      v4 = (_QWORD **)(*((_QWORD *)gptiCurrent + 56) + 168LL);
      for ( i = *v4; i != v4; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 92)) == v1 )
        {
          v2 = *(i - 38);
          goto LABEL_4;
        }
      }
      return 0LL;
    }
    v2 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432);
  }
  else
  {
    v2 = gspklGlobalActive;
  }
LABEL_4:
  if ( v2 )
    return *(_QWORD *)(v2 + 40);
  return 0LL;
}
