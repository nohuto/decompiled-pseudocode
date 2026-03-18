/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C01F7CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01E9CBC (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v10 = PtiFromThreadId(a2);
    if ( v10 )
    {
      v8 = ValidatePwndDesktop(v9, v10);
    }
    else
    {
      v14 = 0LL;
      v13 = 0LL;
      if ( (int)GetConsoleDesktop(a2, v12, &v13, &v14) < 0 )
        UserSetLastError(87LL, v5, v7);
      else
        LOBYTE(v8) = *(_QWORD *)(v9 + 24) == v13;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
