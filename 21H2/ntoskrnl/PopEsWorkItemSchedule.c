/*
 * XREFs of PopEsWorkItemSchedule @ 0x14078019C
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14078017C (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407D4810 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408F29E0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A4152C (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
