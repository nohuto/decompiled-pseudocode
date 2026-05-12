/*
 * XREFs of Feature_Servicing_2205c_38617647__private_IsEnabled @ 0x1C001E278
 * Callers:
 *     StorSetIoGatewayBusy @ 0x1C004E1CC (StorSetIoGatewayBusy.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001CFBC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001D140 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2205c_38617647__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_2205c_38617647__private_featureState,
                                (__int64)&Feature_Servicing_2205c_38617647__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_2205c_38617647__private_reporting,
    0x24D422Fu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2206C_37999740_logged_traits,
    v1,
    v3);
  return v1;
}
