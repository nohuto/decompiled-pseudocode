/*
 * XREFs of Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x1403F13E0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14032BAD0 (RtlGuardCheckExceptionHandler.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140389164 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_EHCONT_Checks_28208890__private_featureState,
                                (__int64)&Feature_Servicing_EHCONT_Checks_28208890__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_EHCONT_Checks_28208890__private_reporting,
    0x1AE6EFAu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2102c_29269619_logged_traits,
    v1,
    v3);
  return v1;
}
