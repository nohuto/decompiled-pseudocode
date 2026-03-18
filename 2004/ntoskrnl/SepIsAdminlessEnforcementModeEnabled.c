/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x14027C0D0
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x14027C0A8 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091992C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
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
