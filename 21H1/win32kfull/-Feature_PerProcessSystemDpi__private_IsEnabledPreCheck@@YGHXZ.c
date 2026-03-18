/*
 * XREFs of ?Feature_PerProcessSystemDpi__private_IsEnabledPreCheck@@YGHXZ @ 0x91B54
 * Callers:
 *     _InitProcessSystemDpi@4 @ 0x91A54 (_InitProcessSystemDpi@4.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_PerProcessSystemDpi__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(0, 0, &Feature_InkProcessor_logged_traits, 1, this, this);
  return 1;
}
