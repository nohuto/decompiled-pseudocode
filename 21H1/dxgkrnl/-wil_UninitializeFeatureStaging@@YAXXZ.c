/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00D43AC
 * Callers:
 *     DxgkUnload @ 0x1C025D1A0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0302C24 (DriverEntry.c)
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
