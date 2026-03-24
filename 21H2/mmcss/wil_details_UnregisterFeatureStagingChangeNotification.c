/*
 * XREFs of wil_details_UnregisterFeatureStagingChangeNotification @ 0x1C000A020
 * Callers:
 *     wil_UninitializeFeatureStaging @ 0x1C000A008 (wil_UninitializeFeatureStaging.c)
 * Callees:
 *     <none>
 */

__int64 wil_details_UnregisterFeatureStagingChangeNotification()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
