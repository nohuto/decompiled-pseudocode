/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C0126670
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_DesktopDisplayBroker__private_reporting,
    12773644LL,
    0LL,
    0LL,
    &Feature_PenTailDockEvents_logged_traits,
    1);
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_BrokeredDisplays_ConsoleSessions__private_reporting,
      19043985LL,
      0LL,
      0LL,
      &Feature_AtomicCheckFailure_logged_traits,
      0);
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
