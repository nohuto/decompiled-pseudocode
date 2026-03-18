/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C037B008
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C011EA50 (EditionBaseDriverUnloadUninitialize.c)
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
