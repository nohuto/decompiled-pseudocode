/*
 * XREFs of PopSetPowerActionState @ 0x140382584
 * Callers:
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407718C0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140776070 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14033FD68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14033FDF0 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C23301 != a1 )
  {
    byte_140C23301 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
