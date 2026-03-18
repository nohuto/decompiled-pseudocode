/*
 * XREFs of ValidateHmenu @ 0x1C0054D60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0054DB0 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LOBYTE(v3) = 2;
  v4 = ThreadWin32Thread;
  result = HMValidateHandle(a1, v3);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(v4 + 456) )
    {
      UserSetLastError(1401LL, v6);
      return 0LL;
    }
  }
  return result;
}
