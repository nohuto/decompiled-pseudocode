/*
 * XREFs of _NtUserWaitAvailableMessageEx@8 @ 0x16B300
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 */

int __stdcall NtUserWaitAvailableMessageEx(int a1, int a2)
{
  int v2; // esi

  EnterCrit(0, 1);
  v2 = xxxSleepThread2(1u, 1u, 0);
  UserSessionSwitchLeaveCrit();
  return v2;
}
