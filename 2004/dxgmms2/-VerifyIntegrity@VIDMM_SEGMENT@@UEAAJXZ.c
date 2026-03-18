/*
 * XREFs of ?VerifyIntegrity@VIDMM_SEGMENT@@UEAAJXZ @ 0x1C00CB370
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0023FB8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyIntegrity(VIDMM_SEGMENT *this)
{
  int v2; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VidMMVerifyIntegrity__private_reporting,
    0x148F1C8u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_VidMMVerifyIntegrity_logged_traits,
    0,
    v2);
  return 0LL;
}
