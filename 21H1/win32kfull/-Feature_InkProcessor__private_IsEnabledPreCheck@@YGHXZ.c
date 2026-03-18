/*
 * XREFs of ?Feature_InkProcessor__private_IsEnabledPreCheck@@YGHXZ @ 0xE8CD6
 * Callers:
 *     ??0InkProcessor@@AAE@XZ @ 0xE8C70 (--0InkProcessor@@AAE@XZ.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_InkProcessor__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(0, 0, &Feature_InkProcessor_logged_traits, 1, this, this);
  return 1;
}
