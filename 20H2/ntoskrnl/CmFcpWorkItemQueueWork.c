/*
 * XREFs of CmFcpWorkItemQueueWork @ 0x1404EC0EC
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404EBF58 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1404EC0B0 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1404EC0D0 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14088019C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140880E24 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall CmFcpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
