/*
 * XREFs of PopSetPowerActionState @ 0x14037FF84
 * Callers:
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407619D0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140765680 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14035CE78 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14035CF00 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C23401 != a1 )
  {
    byte_140C23401 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
