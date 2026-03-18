/*
 * XREFs of CmFcpWorkItemQueueWork @ 0x1404E822C
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E8098 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1404E81F0 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1404E8210 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140879FC4 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall CmFcpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
