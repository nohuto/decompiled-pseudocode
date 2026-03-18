/*
 * XREFs of PsGetThreadId @ 0x140312ED0
 * Callers:
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x1409A40CC (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
