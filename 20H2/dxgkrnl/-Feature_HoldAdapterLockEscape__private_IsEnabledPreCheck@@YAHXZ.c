/*
 * XREFs of ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0045368
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_HoldAdapterLockEscape__private_reporting,
    0x120A358u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
    0,
    v1);
  return 1LL;
}
