/*
 * XREFs of NtUserShowSystemCursor @ 0x1C02041E0
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  EnterSharedCrit(0LL, 1LL);
  v5 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v5) = a1 == 0;
    v5 = GreHidePointer(v5, v2, v3, v4);
  }
  else
  {
    UserSetLastError(5LL, v2, v3);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v5;
}
