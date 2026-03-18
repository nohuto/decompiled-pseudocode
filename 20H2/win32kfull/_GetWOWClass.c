/*
 * XREFs of _GetWOWClass @ 0x1C01E8A74
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01FC1D0 (NtUserGetWOWClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C00BA260 (GetClassPtr.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v10; // rcx
  char v11[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)RtlStringCchCopyW(v11, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v11);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 424), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v10 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v10 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v10 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v6, v7);
  return 0LL;
}
