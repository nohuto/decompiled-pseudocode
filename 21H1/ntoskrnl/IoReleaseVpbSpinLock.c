/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1402C2A30
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402C27AC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
