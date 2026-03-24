/*
 * XREFs of IoAcquireVpbSpinLock @ 0x140360CD0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140360A2C (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
