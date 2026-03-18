/*
 * XREFs of DbgPrompt @ 0x140583B60
 * Callers:
 *     RtlAssert @ 0x140586E00 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140405270 (DebugPrompt.c)
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
