/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0181190
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0181684 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

_UNKNOWN **Feature_PenTapped_ReportUsage()
{
  return wil_details_FeatureReporting_ReportUsageToService(
           (int)&Feature_PenTapped__private_reporting,
           0xDA33DFu,
           0,
           0,
           (__int64)&Feature_KeyboardInputVirtualization_logged_traits,
           1u,
           2);
}
