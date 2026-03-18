/*
 * XREFs of HalpFlushAndWait @ 0x1403F2080
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x14037F3D0 (KeSweepLocalCaches.c)
 *     HalpProcessorFence @ 0x1403F1C50 (HalpProcessorFence.c)
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
