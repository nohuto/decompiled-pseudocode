/*
 * XREFs of HalpFlushAndWait @ 0x1403FA0F0
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x1403821F0 (KeSweepLocalCaches.c)
 *     HalpProcessorFence @ 0x1403F9CC0 (HalpProcessorFence.c)
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
