/*
 * XREFs of IoAcquireVpbSpinLock @ 0x140203290
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
