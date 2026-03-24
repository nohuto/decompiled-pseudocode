/*
 * XREFs of IoReleaseVpbSpinLock @ 0x140360CB0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140360A2C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
