/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x1402FD6B8
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x1402FD690 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091F5AC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

char SepIsAdminlessEnforcementModeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( SeAdminlessEnforcementModeEnabled )
    return 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_SModeAdminless__private_reporting,
    17051301,
    0,
    0,
    (__int64)&Feature_PdttSupport_logged_traits,
    0);
  return v0;
}
