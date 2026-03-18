/*
 * XREFs of ZwQueryWnfStateData @ 0x1403F6220
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x140389C98 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087B2B4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140916598 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
