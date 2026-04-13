/*
 * XREFs of ?BatterySaverOverrideEventNotificationHandler@ContentManagement@@YAJXZ @ 0x18002F040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ContentManagement::BatterySaverOverrideEventNotificationHandler(ContentManagement *this)
{
  return RtlPublishWnfStateData(WNF_SHEL_CREATIVE_EVENT_BATTERY_SAVER_OVERRIDE_TRIGGERED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
}
