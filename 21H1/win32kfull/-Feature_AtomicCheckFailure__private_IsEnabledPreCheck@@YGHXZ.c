/*
 * XREFs of ?Feature_AtomicCheckFailure__private_IsEnabledPreCheck@@YGHXZ @ 0xEAA9A
 * Callers:
 *     ?InitExtraInstrumentations@@YGXXZ @ 0xEAA6E (-InitExtraInstrumentations@@YGXXZ.c)
 * Callees:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 */

int __thiscall Feature_AtomicCheckFailure__private_IsEnabledPreCheck(void *this)
{
  wil_details_FeatureReporting_ReportUsageToService(
    0,
    0,
    &Feature_BrokeredDisplays_ConsoleSessions_logged_traits,
    0,
    this,
    this);
  return 1;
}
