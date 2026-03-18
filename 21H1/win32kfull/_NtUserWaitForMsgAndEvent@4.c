/*
 * XREFs of _NtUserWaitForMsgAndEvent@4 @ 0x16B33B
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 */

int __stdcall NtUserWaitForMsgAndEvent(int a1)
{
  int v1; // esi

  EnterCrit(0, 1);
  v1 = xxxSleepTask(0, a1);
  UserSessionSwitchLeaveCrit();
  return v1;
}
