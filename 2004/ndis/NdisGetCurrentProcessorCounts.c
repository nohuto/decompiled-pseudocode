/*
 * XREFs of NdisGetCurrentProcessorCounts @ 0x1C00BDC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetCurrentProcessorCounts(PULONG pIdleCount, PULONG pKernelAndUser, PULONG pIndex)
{
  ExGetCurrentProcessorCounts(pIdleCount, pKernelAndUser, pIndex);
}
