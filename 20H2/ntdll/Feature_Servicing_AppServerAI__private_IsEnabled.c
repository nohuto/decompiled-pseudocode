/*
 * XREFs of Feature_Servicing_AppServerAI__private_IsEnabled @ 0x18009C970
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B94C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x18009BACC (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_AppServerAI__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                Feature_Servicing_AppServerAI__private_featureState,
                                (__int64)&Feature_Servicing_AppServerAI__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_AppServerAI__private_reporting,
    0x23B775Au,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_AppServerAI_logged_traits,
    v1,
    v3);
  return v1;
}
