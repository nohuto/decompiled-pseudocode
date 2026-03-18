/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x14033A854
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x14033A82C (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091867C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
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
