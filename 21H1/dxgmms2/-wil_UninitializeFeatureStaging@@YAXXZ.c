/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C005E190
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00AF9CC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
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
