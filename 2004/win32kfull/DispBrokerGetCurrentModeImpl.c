/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C01257F0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  int v1; // [rsp+30h] [rbp-18h]
  int v2; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_DesktopDisplayBroker__private_reporting,
    0xC2E90Cu,
    0,
    0,
    (__int64)&Feature_PenTailDockEvents_logged_traits,
    1u,
    v1);
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_BrokeredDisplays_ConsoleSessions__private_reporting,
      0x1229691u,
      0,
      0,
      (__int64)&Feature_AtomicCheckFailure_logged_traits,
      0,
      v2);
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
