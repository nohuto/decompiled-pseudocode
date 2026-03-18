/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005ED70
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005FF1C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
