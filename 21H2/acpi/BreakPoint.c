/*
 * XREFs of BreakPoint @ 0x1C0069C30
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
