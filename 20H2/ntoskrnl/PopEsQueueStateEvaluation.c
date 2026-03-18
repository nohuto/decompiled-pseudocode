/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14077C1DC
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1407D0100 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408F4FC0 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14077C1FC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
