/*
 * XREFs of Feature_Servicing_2104_31612686__private_IsEnabled @ 0x1403F28E8
 * Callers:
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038A1D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2104_31612686__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_2104_31612686__private_featureState,
                                (__int64)&Feature_Servicing_2104_31612686__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_2104_31612686__private_reporting,
    0x1E25F0Eu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CorrectTimeAfterDST_33809459_logged_traits,
    v1,
    v3);
  return v1;
}
