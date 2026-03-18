/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A7370
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 0);
}
