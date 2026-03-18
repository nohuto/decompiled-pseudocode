/*
 * XREFs of NtUserShowSystemCursor @ 0x1C0203370
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     GreHidePointer @ 0x1C0097950 (GreHidePointer.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx

  EnterSharedCrit(0LL, 1LL);
  v6 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL, v2, v3) )
  {
    LOBYTE(v6) = a1 == 0;
    v6 = GreHidePointer(v6);
  }
  else
  {
    UserSetLastError(5LL, v4, v5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
