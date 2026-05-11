/*
 * XREFs of Feature_Servicing_AudioRegressionFix__private_IsEnabled @ 0x1C0003138
 * Callers:
 *     TopologyProcessFeatureUnit @ 0x1C0026160 (TopologyProcessFeatureUnit.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0002748 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0002B24 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_AudioRegressionFix__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  if ( (Feature_Servicing_AudioRegressionFix__private_featureState & 1) != 0 )
    v0 = Feature_Servicing_AudioRegressionFix__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Servicing_AudioRegressionFix__private_featureState,
           (unsigned int)Feature_Servicing_AudioRegressionFix__private_featureState,
           (__int64)Feature_Servicing_AudioRegressionFix__private_descriptor);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService((v0 >> 8) & 1, (v0 >> 9) & 1, v1, 3);
  return v1;
}
