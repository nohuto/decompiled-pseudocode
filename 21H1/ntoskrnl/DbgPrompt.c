/*
 * XREFs of DbgPrompt @ 0x14057FAB0
 * Callers:
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1403FDD10 (DebugPrompt.c)
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
