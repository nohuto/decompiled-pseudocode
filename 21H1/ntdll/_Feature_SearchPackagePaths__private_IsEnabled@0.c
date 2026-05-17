/*
 * XREFs of _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5
 * Callers:
 *     _RtlpComputeSearchPath@8 @ 0x4B2ABB20 (_RtlpComputeSearchPath@8.c)
 *     _RtlpComputeExePath@8 @ 0x4B2AC050 (_RtlpComputeExePath@8.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0x4B3064E6 (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 *     _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0x4B30660E (_wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8.c)
 */

int __stdcall Feature_SearchPackagePaths__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  int v1; // esi
  int v2; // ecx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_SearchPackagePaths__private_featureState,
                                &Feature_SearchPackagePaths__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    v2,
    v1,
    v2,
    v2);
  return v1;
}
