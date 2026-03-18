/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C0087B70
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a2);
  v8 = 0LL;
  if ( v4 )
  {
    xxxWindowEvent(a1, 1u);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
