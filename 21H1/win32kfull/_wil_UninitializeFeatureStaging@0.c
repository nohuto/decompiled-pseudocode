/*
 * XREFs of _wil_UninitializeFeatureStaging@0 @ 0x27A000
 * Callers:
 *     _EditionBaseDriverUnloadUninitialize@0 @ 0xD4D88 (_EditionBaseDriverUnloadUninitialize@0.c)
 * Callees:
 *     <none>
 */

int __stdcall wil_UninitializeFeatureStaging()
{
  int result; // eax

  result = wil_details_featureChangeNotification;
  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification(wil_details_featureChangeNotification);
    wil_details_featureChangeNotification = 0;
  }
  return result;
}
