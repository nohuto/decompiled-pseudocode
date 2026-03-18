/*
 * XREFs of PopEsWorkItemSchedule @ 0x1407EEF9C
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x1407EEF7C (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140864570 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14099A120 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140B03434 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
