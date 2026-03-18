/*
 * XREFs of NtUserConsoleControl @ 0x1C0027DF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  SIZE_T v9; // rsi
  unsigned int v10; // ebx
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  Src = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 > 6 )
  {
    v10 = -1073741823;
    UserSetLastStatus(-1073741811);
  }
  else if ( a3 > 0x18 )
  {
    v10 = -1073741811;
  }
  else if ( a2 && a3 )
  {
    v9 = a3;
    ProbeForRead(a2, a3, 2u);
    memmove(&Src, (const void *)a2, a3);
    v10 = xxxConsoleControl(a1, &Src, a3);
    ProbeForWrite(a2, v9, 2u);
    memmove((void *)a2, &Src, v9);
  }
  else
  {
    v10 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v10;
}
