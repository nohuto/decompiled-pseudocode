/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1402FF290
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402FF00C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
