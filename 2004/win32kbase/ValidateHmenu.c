/*
 * XREFs of ValidateHmenu @ 0x1C00742B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0074300 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  LOBYTE(v3) = 2;
  v4 = ThreadWin32Thread;
  result = HMValidateHandle(a1, v3);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(v4 + 448) )
    {
      UserSetLastError(1401LL);
      return 0LL;
    }
  }
  return result;
}
