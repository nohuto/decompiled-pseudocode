/*
 * XREFs of ?Feature_DWMTouchTargeting__private_IsEnabledPreCheck@@YGHXZ @ 0xEC5E6
 * Callers:
 *     _DCompSessionInitialize@0 @ 0x29329E (_DCompSessionInitialize@0.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_DWMTouchTargeting__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(0, 0, &Feature_InkProcessor_logged_traits, 1, this, this);
  return 1;
}
