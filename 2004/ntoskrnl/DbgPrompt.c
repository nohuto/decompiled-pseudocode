/*
 * XREFs of DbgPrompt @ 0x140580200
 * Callers:
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1403FEFA0 (DebugPrompt.c)
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
