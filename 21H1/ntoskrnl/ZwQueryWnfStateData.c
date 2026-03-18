/*
 * XREFs of ZwQueryWnfStateData @ 0x1403F4F90
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x140388D28 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140588AB0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140879FC4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140915328 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
