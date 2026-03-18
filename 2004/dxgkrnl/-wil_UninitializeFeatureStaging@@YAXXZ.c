/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00DAF2C
 * Callers:
 *     DxgkUnload @ 0x1C02614A0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0306D00 (DriverEntry.c)
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
