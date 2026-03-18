/*
 * XREFs of PopEsWorkItemSchedule @ 0x14076D7CC
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14076D7AC (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407C1A70 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408EF490 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A3C724 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
