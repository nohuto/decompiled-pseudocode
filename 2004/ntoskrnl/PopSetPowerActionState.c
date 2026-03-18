/*
 * XREFs of PopSetPowerActionState @ 0x1403807C4
 * Callers:
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407632B0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140767040 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1402DED68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402DEDF0 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C22E41 != a1 )
  {
    byte_140C22E41 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
