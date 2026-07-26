/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00F8328
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void wil_UninitializeFeatureStaging(void)
{
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification(wil_details_featureChangeNotification);
    wil_details_featureChangeNotification = 0LL;
  }
}
