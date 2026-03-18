/*
 * XREFs of LeaveEditionCrit @ 0x1C0129280
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0096B60 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00AFBD0 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
