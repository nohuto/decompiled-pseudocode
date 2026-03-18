/*
 * XREFs of NtUserConsoleControl @ 0x1C003B030
 * Callers:
 *     <none>
 * Callees:
 *     xxxConsoleControl @ 0x1C003B148 (xxxConsoleControl.c)
 *     UserSetLastStatus @ 0x1C008004C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  SIZE_T v7; // rsi
  unsigned int v8; // ebx
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  Src = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 > 6 )
  {
    v8 = -1073741823;
    UserSetLastStatus(-1073741811);
  }
  else if ( a3 > 0x18 )
  {
    v8 = -1073741811;
  }
  else if ( a2 && a3 )
  {
    v7 = a3;
    ProbeForRead(a2, a3, 2u);
    memmove(&Src, (const void *)a2, a3);
    v8 = xxxConsoleControl(a1, &Src, a3);
    ProbeForWrite(a2, v7, 2u);
    memmove((void *)a2, &Src, v7);
  }
  else
  {
    v8 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
