/*
 * XREFs of _NtUserWaitForInputIdle@12 @ 0xE362E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxWaitForInputIdle@12 @ 0xE365C (_xxxWaitForInputIdle@12.c)
 */

int __stdcall NtUserWaitForInputIdle(HANDLE ProcessId, int a2, int a3)
{
  int v3; // esi

  EnterCrit(0, 1);
  v3 = xxxWaitForInputIdle(ProcessId, a3);
  UserSessionSwitchLeaveCrit();
  return v3;
}
