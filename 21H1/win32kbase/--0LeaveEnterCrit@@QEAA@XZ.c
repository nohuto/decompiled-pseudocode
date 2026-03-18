/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C000BB20
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005296C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
