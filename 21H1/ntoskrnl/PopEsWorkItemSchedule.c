/*
 * XREFs of PopEsWorkItemSchedule @ 0x14076B02C
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14076B00C (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407BE780 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408EE1A0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A3CACC (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
