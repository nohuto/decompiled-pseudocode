/*
 * XREFs of Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038251C
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140770AF4 (PopEnableSystemSleepCheckpoint.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140771790 (PopUpdatePowerActionWatchdogTimeouts.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038C474 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_SleepReliabilityDetailedDiagnostics__private_featureState,
                                &Feature_SleepReliabilityDetailedDiagnostics__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_SleepReliabilityDetailedDiagnostics__private_reporting,
    0x128F008u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_SleepReliabilityDetailedDiagnostics_logged_traits,
    v1,
    v3);
  return v1;
}
