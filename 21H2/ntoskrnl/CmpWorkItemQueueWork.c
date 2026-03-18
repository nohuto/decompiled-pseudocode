/*
 * XREFs of CmpWorkItemQueueWork @ 0x1403C7B20
 * Callers:
 *     CmpNotifyMachineHiveLoaded @ 0x1403C7A8C (CmpNotifyMachineHiveLoaded.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x14053FE50 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x14053FFB0 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x14053FFD0 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140833350 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140923614 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
