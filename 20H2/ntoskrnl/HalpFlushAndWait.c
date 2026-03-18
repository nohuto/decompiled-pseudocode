/*
 * XREFs of HalpFlushAndWait @ 0x1403F7EC0
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x140381AF0 (KeSweepLocalCaches.c)
 *     HalpProcessorFence @ 0x1403F7A90 (HalpProcessorFence.c)
 */

unsigned __int64 __fastcall HalpFlushAndWait(volatile signed __int32 *a1)
{
  KeSweepLocalCaches();
  _InterlockedIncrement(a1);
  do
    _mm_pause();
  while ( *a1 );
  return HalpProcessorFence();
}
