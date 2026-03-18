/*
 * XREFs of CmFcpWorkItemQueueWork @ 0x1404E885C
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E86C8 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1404E8820 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1404E8840 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087A62C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087B2B4 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall CmFcpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
