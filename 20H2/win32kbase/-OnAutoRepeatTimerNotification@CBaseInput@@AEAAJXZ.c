/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C019EA20
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
