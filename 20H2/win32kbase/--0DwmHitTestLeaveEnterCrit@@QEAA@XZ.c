/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0119880
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(
        DwmHitTestLeaveEnterCrit *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  return this;
}
