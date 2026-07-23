/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1402A5BB0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402A592C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
