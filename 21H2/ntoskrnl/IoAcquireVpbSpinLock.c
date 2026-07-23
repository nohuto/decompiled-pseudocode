/*
 * XREFs of IoAcquireVpbSpinLock @ 0x1402A5BD0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402A592C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
