/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1409D4F88
 * Callers:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
