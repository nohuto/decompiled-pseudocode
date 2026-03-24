/*
 * XREFs of DbgPrompt @ 0x140585570
 * Callers:
 *     RtlAssert @ 0x140588810 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14090AEE4 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409D825C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1404078E0 (DebugPrompt.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
