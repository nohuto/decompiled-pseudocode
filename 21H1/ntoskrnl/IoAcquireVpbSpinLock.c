/*
 * XREFs of IoAcquireVpbSpinLock @ 0x1402C2A50
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402C27AC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
