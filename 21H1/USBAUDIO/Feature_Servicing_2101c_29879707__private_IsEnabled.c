/*
 * XREFs of Feature_Servicing_2101c_29879707__private_IsEnabled @ 0x1C00028E0
 * Callers:
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0022970 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0001EB8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00022CC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2101c_29879707__private_IsEnabled()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  if ( (Feature_Servicing_2101c_29879707__private_featureState & 1) != 0 )
    v0 = Feature_Servicing_2101c_29879707__private_featureState;
  else
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Servicing_2101c_29879707__private_featureState,
           (unsigned int)Feature_Servicing_2101c_29879707__private_featureState,
           (__int64)&wil_details_featureDescriptors_a);
  v1 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService((v0 >> 8) & 1, (v0 >> 9) & 1, v1, 3);
  return v1;
}
