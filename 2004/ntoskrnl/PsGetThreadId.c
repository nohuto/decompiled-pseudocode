/*
 * XREFs of PsGetThreadId @ 0x140342160
 * Callers:
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x1406BBAB0 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x14099DFCC (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
