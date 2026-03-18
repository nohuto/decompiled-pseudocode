/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1409D4FE8
 * Callers:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
