/*
 * XREFs of PopEsWorkItemSchedule @ 0x14077FFDC
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14077FFBC (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407D46A0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408F2880 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A4052C (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
