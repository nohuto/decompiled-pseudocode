/*
 * XREFs of ZwQueryWnfStateData @ 0x1403FADF0
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x14038BF38 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140880E24 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x14091C1C8 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
