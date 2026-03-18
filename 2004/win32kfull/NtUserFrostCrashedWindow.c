/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01F9770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxFrostCrashedWindow @ 0x1C020AC04 (xxxFrostCrashedWindow.c)
 */

__int64 __fastcall NtUserFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v8 = xxxFrostCrashedWindow(v9, a2);
    else
      UserSetLastError(1400LL, v10, v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
