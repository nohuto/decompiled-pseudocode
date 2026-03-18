/*
 * XREFs of KiUmsCallEntryContinue @ 0x140409CC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x140521070 (KiSwapToUmsThreadContinue.c)
 */

__int64 KiUmsCallEntryContinue()
{
  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiSwapToUmsThreadContinue();
}
