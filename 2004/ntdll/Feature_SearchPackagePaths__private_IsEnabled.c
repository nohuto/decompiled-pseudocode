/*
 * XREFs of Feature_SearchPackagePaths__private_IsEnabled @ 0x18009B590
 * Callers:
 *     RtlpComputeExePath @ 0x18006C350 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18006C3E0 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18006C5C0 (RtlpComputeDllPath.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B930 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009BACC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_SearchPackagePaths__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  __int64 v3; // [rsp+50h] [rbp+8h]

  LODWORD(v3) = Feature_SearchPackagePaths__private_featureState;
  if ( (Feature_SearchPackagePaths__private_featureState & 1) != 0 )
    v0 = Feature_SearchPackagePaths__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_SearchPackagePaths__private_featureState,
           v3,
           &Feature_SearchPackagePaths__private_descriptor);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_SearchPackagePaths__private_reporting,
    24394929,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (__int64)&Feature_Servicing_EHCONT_Checks_28208890_logged_traits,
    v1);
  return v1;
}
