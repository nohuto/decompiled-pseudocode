/*
 * XREFs of _NtUserEvent@4 @ 0x161639
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCsEvent@8 @ 0x1A4AB1 (_xxxCsEvent@8.c)
 */

int __stdcall NtUserEvent(int a1)
{
  int v1; // esi

  EnterCrit(0, 1);
  ProbeForRead((volatile void *)(a1 + 8), *(unsigned __int16 *)(a1 + 6), 1u);
  v1 = xxxCsEvent(a1);
  UserSessionSwitchLeaveCrit();
  return v1;
}
