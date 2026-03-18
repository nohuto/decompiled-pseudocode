/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1409D514C
 * Callers:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D73B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x1409DDEF0 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E12D4 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140D48668 = a2;
    qword_140D48670 = a3;
    qword_140D48678 = a4;
    qword_140D48680 = a5;
  }
  return v5;
}
