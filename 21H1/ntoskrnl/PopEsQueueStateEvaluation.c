/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14076B00C
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1407BE680 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408EE0C0 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14076B02C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
