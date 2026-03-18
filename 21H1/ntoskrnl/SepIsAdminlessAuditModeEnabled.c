/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x1405910B4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091867C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
