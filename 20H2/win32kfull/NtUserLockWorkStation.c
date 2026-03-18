/*
 * XREFs of NtUserLockWorkStation @ 0x1C0008F10
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
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
