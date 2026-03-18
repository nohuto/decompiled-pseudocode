/*
 * XREFs of Feature_Servicing_2108c_33766748__private_IsEnabled @ 0x1C0159848
 * Callers:
 *     FindNCHit @ 0x1C01179B4 (FindNCHit.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C01581A0 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2108c_33766748__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_2108c_33766748__private_featureState,
                                (__int64)&Feature_Servicing_2108c_33766748__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_2108c_33766748__private_reporting,
    0x2033D5Cu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_MatchedFrameCookieWatson_35935814_logged_traits,
    v1,
    v3);
  return v1;
}
