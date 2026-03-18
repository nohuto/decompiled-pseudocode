/*
 * XREFs of Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled @ 0x1403F7828
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405C0ADC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038C474 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_featureState,
                                (__int64)&Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_reporting,
    0x25A847Au,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_HardenTokenPPLRestrictions_logged_traits,
    v1,
    v3);
  return v1;
}
