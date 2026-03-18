/*
 * XREFs of Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714
 * Callers:
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098CDE4 (ExUpdateSystemTimeFromCmos.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     ExpSetSystemTime @ 0x140995C78 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038A1D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_CorrectTimeAfterDST_33809459__private_featureState,
                                (__int64)&Feature_Servicing_CorrectTimeAfterDST_33809459__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_CorrectTimeAfterDST_33809459__private_reporting,
    0x203E433u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CorrectTimeAfterDST_33809459_logged_traits,
    v1,
    v3);
  return v1;
}
