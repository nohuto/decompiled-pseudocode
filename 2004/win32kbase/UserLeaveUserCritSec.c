/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0041CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall UserLeaveUserCritSec(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
