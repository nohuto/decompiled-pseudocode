/*
 * XREFs of PopEsWorkItemSchedule @ 0x14077C1FC
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14077C1DC (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407D0270 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408F50A0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A429C4 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
