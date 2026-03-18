/*
 * XREFs of IoReleaseVpbSpinLock @ 0x140203270
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
