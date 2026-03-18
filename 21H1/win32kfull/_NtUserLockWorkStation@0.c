/*
 * XREFs of _NtUserLockWorkStation@0 @ 0x122D6
 * Callers:
 *     <none>
 * Callees:
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserLockWorkStation()
{
  int v0; // esi

  v0 = 0;
  EnterCrit(0, 1);
  if ( CheckWinstaAttributeAccess(0x10u) )
  {
    PostWinlogonMessage(1027, 0);
    v0 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
