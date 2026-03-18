/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C019F270
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 0);
}
