/*
 * XREFs of Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x18009C6C0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x18006DEE0 (RtlGuardCheckExceptionHandler.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B930 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009BACC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+50h] [rbp+8h]

  LODWORD(v4) = Feature_Servicing_EHCONT_Checks_28208890__private_featureState;
  if ( (Feature_Servicing_EHCONT_Checks_28208890__private_featureState & 1) != 0 )
    v0 = Feature_Servicing_EHCONT_Checks_28208890__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Servicing_EHCONT_Checks_28208890__private_featureState,
           v4,
           (__int64)&Feature_Servicing_EHCONT_Checks_28208890__private_descriptor);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_EHCONT_Checks_28208890__private_reporting,
    0x1AE6EFAu,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (__int64)&Feature_Servicing_EHCONT_Checks_28208890_logged_traits,
    v1,
    v3);
  return v1;
}
