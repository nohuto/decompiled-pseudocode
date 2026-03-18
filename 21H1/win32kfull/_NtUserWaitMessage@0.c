/*
 * XREFs of _NtUserWaitMessage@0 @ 0xA3C46
 * Callers:
 *     <none>
 * Callees:
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 */

int __stdcall NtUserWaitMessage()
{
  int v0; // esi

  EnterCrit(0, 1);
  v0 = xxxWaitMessageEx((void *)0x3CFF, 0);
  UserSessionSwitchLeaveCrit();
  return v0;
}
