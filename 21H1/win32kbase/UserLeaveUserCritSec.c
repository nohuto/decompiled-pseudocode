/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0033130
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall UserLeaveUserCritSec(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
