/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14076D7AC
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1407C1900 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408EF3B0 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14076D7CC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
