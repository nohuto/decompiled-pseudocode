/*
 * XREFs of NtUserSetThreadState @ 0x1C0121410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL, v5, v6);
    v4 = 0LL;
  }
  else
  {
    v7 = gptiCurrent;
    v8 = *(_QWORD *)(gptiCurrent + 424LL);
    v9 = *(_DWORD *)(v8 + 388) ^ a2 & (a1 ^ *(_DWORD *)(v8 + 388));
    *(_DWORD *)(v8 + 388) = v9;
  }
  UserSessionSwitchLeaveCrit(v9, v5, v7);
  return v4;
}
