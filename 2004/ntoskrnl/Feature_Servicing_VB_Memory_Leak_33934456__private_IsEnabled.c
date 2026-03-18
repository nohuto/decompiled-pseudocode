/*
 * XREFs of Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled @ 0x1403ED274
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B4188 (PnpBootDeviceWait.c)
 *     PipCheckForDenyExecute @ 0x14073592C (PipCheckForDenyExecute.c)
 *     IoOpenDriverRegistryKey @ 0x1407B2510 (IoOpenDriverRegistryKey.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038A1D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_VB_Memory_Leak_33934456__private_featureState,
                                (__int64)&Feature_Servicing_VB_Memory_Leak_33934456__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_VB_Memory_Leak_33934456__private_reporting,
    0x205CC78u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CorrectTimeAfterDST_33809459_logged_traits,
    v1,
    v3);
  return v1;
}
