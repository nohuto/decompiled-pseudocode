/*
 * XREFs of Feature_Servicing_User_CET_25433400__private_IsEnabled @ 0x1403EC8EC
 * Callers:
 *     KiIntersectFeaturesWithLoader @ 0x14099C988 (KiIntersectFeaturesWithLoader.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140389164 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_User_CET_25433400__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_User_CET_25433400__private_featureState,
                                (__int64)&Feature_Servicing_User_CET_25433400__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_User_CET_25433400__private_reporting,
    0x1841538u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2102c_29269619_logged_traits,
    v1,
    v3);
  return v1;
}
