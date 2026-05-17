/*
 * XREFs of Feature_SearchPackagePaths__private_IsEnabled @ 0x18009C4E0
 * Callers:
 *     RtlpComputeExePath @ 0x18006C460 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18006C4F0 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18006C6D0 (RtlpComputeDllPath.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B94C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x18009BACC (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_SearchPackagePaths__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                Feature_SearchPackagePaths__private_featureState,
                                (__int64)&Feature_SearchPackagePaths__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SearchPackagePaths__private_reporting,
    0x1743CB1u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_AppServerAI_logged_traits,
    v1,
    v3);
  return v1;
}
