/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A1610
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C015A8D0 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 0);
}
