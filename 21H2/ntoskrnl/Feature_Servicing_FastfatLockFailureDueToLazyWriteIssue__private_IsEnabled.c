/*
 * XREFs of Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled @ 0x14041718C
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140389670 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403DF3B0 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_featureState,
                                (__int64)&Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_reporting,
    0x315BB42u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CcTelemetryCrashOnHPEFix_logged_traits,
    v1,
    v3);
  return v1;
}
