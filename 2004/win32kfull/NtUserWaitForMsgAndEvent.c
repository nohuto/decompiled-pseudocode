/*
 * XREFs of NtUserWaitForMsgAndEvent @ 0x1C0205320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserWaitForMsgAndEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  EnterCrit(0LL, 1LL);
  UserSessionSwitchLeaveCrit(v1, v0, v2);
  return 0LL;
}
