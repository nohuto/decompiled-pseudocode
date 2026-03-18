/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6B20
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
