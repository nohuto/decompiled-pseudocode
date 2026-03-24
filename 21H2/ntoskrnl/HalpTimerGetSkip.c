/*
 * XREFs of HalpTimerGetSkip @ 0x1403F0310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
