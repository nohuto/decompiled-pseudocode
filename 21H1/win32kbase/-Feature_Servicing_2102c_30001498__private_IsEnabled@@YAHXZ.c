/*
 * XREFs of ?Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ @ 0x1C00D0940
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C01417D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2102c_30001498__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_2102c_30001498__private_featureState,
                                &Feature_Servicing_2102c_30001498__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_2102c_30001498__private_reporting,
    0x1C9C95Au,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_DynamicModeChange_23402279_logged_traits,
    v1,
    3);
  return v1;
}
