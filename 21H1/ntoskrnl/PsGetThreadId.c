/*
 * XREFs of PsGetThreadId @ 0x140304680
 * Callers:
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x140651FEC (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x14099C82C (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
