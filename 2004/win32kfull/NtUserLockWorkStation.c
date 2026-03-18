/*
 * XREFs of NtUserLockWorkStation @ 0x1C0008F20
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 NtUserLockWorkStation()
{
  __int64 v0; // rbx

  EnterCrit(0LL, 1LL);
  v0 = 0LL;
  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    PostWinlogonMessage(1027LL, 0LL);
    v0 = 1LL;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
