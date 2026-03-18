/*
 * XREFs of Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C00D1108
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C011B39C (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2108c_32183379__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_2108c_32183379__private_featureState,
                                &Feature_Servicing_2108c_32183379__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_2108c_32183379__private_reporting,
    0x1EB1453u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2109c_34956946_logged_traits,
    v1,
    3);
  return v1;
}
