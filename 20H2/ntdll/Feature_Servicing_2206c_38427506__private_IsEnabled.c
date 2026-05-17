/*
 * XREFs of Feature_Servicing_2206c_38427506__private_IsEnabled @ 0x18009B470
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B94C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x18009BACC (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2206c_38427506__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_2206c_38427506__private_featureState,
                                &Feature_Servicing_2206c_38427506__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_Servicing_2206c_38427506__private_reporting,
    38427506,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_AppServerAI_logged_traits,
    v1);
  return v1;
}
