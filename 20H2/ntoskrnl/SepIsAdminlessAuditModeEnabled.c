/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140595244
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091F5AC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
