/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C00DC03C
 * Callers:
 *     DxgkUnload @ 0x1C0261750 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0307D3C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
