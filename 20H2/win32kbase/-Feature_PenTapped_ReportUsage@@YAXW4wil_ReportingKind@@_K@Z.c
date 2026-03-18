/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C017ED60
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C017F254 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

void Feature_PenTapped_ReportUsage()
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_PenTapped__private_reporting,
    0xDA33DFu,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    2);
}
