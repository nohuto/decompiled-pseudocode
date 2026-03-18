/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00BC008
 * Callers:
 *     DriverEntry @ 0x1C002DD60 (DriverEntry.c)
 *     DriverUnload @ 0x1C002DFD0 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void wil_UninitializeFeatureStaging(void)
{
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
