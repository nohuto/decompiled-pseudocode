/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A0DC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C015A8D0 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
