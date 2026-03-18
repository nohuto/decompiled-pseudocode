/*
 * XREFs of NtUserWOWCleanup @ 0x1C0205270
 * Callers:
 *     <none>
 * Callees:
 *     _WOWCleanup @ 0x1C0228700 (_WOWCleanup.c)
 */

__int64 __fastcall NtUserWOWCleanup(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterCrit(0LL, 1LL);
  v4 = (int)WOWCleanup(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
