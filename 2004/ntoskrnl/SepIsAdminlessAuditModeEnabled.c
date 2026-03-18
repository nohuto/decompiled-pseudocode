/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x1405917A4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091992C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
