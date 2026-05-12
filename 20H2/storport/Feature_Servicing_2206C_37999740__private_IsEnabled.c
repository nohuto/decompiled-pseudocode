/*
 * XREFs of Feature_Servicing_2206C_37999740__private_IsEnabled @ 0x1C001CB78
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortGetUncachedExtension @ 0x1C00393E0 (StorPortGetUncachedExtension.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E44 (RaidAdapterReleaseResources.c)
 *     RaidInitializeAdapter @ 0x1C0079570 (RaidInitializeAdapter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001CFBC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001D140 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2206C_37999740__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_2206C_37999740__private_featureState,
                                &wil_details_featureDescriptors_a);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_Servicing_2206C_37999740__private_reporting,
    37999740,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2206C_37999740_logged_traits,
    v1);
  return v1;
}
