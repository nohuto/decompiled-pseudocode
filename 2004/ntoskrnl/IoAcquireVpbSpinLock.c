/*
 * XREFs of IoAcquireVpbSpinLock @ 0x1402FF2B0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402FF00C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
