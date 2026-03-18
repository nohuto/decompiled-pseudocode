/*
 * XREFs of Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_IsEnabled @ 0x1C001A28C
 * Callers:
 *     Register_PrepareHardware @ 0x1C006DF14 (Register_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006F01C (DmaEnabler_Create.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001A5FC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001A77C (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v2; // edx
  int v3; // ecx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_LimitNXPXHCIControllerTo32bitDMA__private_featureState,
                                &wil_details_featureDescriptors_a);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    v3,
    v2,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1);
  return v1;
}
