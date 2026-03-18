/*
 * XREFs of DCompSessionInitialize @ 0x1C0394EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 DCompSessionInitialize()
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DWMTouchTargeting__private_reporting,
    0x7F63A4u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_PenTailDockEvents_logged_traits,
    1u,
    v1);
  g_bHitTestDwmFirstForTouch = 1;
  return DCompositionSessionInitialize(0LL);
}
