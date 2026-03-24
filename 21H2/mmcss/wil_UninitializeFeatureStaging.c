/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C000A008
 * Callers:
 *     CiDriverUnload @ 0x1C000C770 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000D290 (DriverEntry.c)
 * Callees:
 *     wil_details_UnregisterFeatureStagingChangeNotification @ 0x1C000A020 (wil_details_UnregisterFeatureStagingChangeNotification.c)
 */

__int64 wil_UninitializeFeatureStaging()
{
  return wil_details_UnregisterFeatureStagingChangeNotification();
}
