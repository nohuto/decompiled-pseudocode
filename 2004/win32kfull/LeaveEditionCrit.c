/*
 * XREFs of LeaveEditionCrit @ 0x1C01273E0
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0065C60 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C006B6E0 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3);
}
