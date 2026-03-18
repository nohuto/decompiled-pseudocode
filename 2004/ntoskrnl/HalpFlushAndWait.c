/*
 * XREFs of HalpFlushAndWait @ 0x1403F3310
 * Callers:
 *     HaliAcpiSleep @ 0x140383470 (HaliAcpiSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x14037FD30 (KeSweepLocalCaches.c)
 *     HalpProcessorFence @ 0x1403F2EE0 (HalpProcessorFence.c)
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
