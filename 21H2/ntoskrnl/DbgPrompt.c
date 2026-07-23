/*
 * XREFs of DbgPrompt @ 0x1405857A0
 * Callers:
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140407AC0 (DebugPrompt.c)
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
