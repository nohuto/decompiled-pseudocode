/*
 * XREFs of _GetDC @ 0x1C00ADB70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 */

__int64 __fastcall GetDC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v4 = 0x10000LL;
    return GetDCEx(a1, 0LL, v4, a4);
  }
  result = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( result )
  {
    v4 = 3LL;
    a1 = *(_QWORD **)(*(_QWORD *)(result + 8) + 24LL);
    return GetDCEx(a1, 0LL, v4, a4);
  }
  return result;
}
