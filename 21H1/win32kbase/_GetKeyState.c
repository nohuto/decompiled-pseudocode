/*
 * XREFs of _GetKeyState @ 0x1C00342F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int16 __fastcall GetKeyState(unsigned int a1)
{
  char v1; // bl
  int v2; // r8d
  __int16 v3; // r9
  __int16 result; // ax

  v1 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v2 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2)
                            + *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 424)
                            + 228);
    v3 = _bittest(&v2, (unsigned __int8)(2 * (v1 & 3) + 1));
    result = v3 | 0xFF80;
    if ( !_bittest(&v2, (unsigned __int8)(2 * (v1 & 3))) )
      return v3;
  }
  return result;
}
