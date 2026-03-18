/*
 * XREFs of _NtUserGetCPD@12 @ 0xC4540
 * Callers:
 *     <none>
 * Callees:
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 */

int __stdcall NtUserGetCPD(int a1, int a2, int a3)
{
  int CPD; // esi

  CPD = 0;
  EnterCrit(0, 1);
  if ( ValidateHwnd(a1) && ((a2 & 0xFFFFFFFC) == 0x20 || (a2 & 0xFFFFFFFC) == 0x40 || (a2 & 0xFFFFFFFC) == 0x80) )
    CPD = GetCPD(a3);
  UserSessionSwitchLeaveCrit();
  return CPD;
}
