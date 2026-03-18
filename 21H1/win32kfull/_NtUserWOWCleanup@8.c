/*
 * XREFs of _NtUserWOWCleanup@8 @ 0x16B2D1
 * Callers:
 *     <none>
 * Callees:
 *     __WOWCleanup@8 @ 0x188D1F (__WOWCleanup@8.c)
 */

int __stdcall NtUserWOWCleanup(int a1, int a2)
{
  int v2; // esi

  EnterCrit(0, 1);
  v2 = _WOWCleanup(a1, a2);
  UserSessionSwitchLeaveCrit();
  return v2;
}
