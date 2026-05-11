/*
 * XREFs of ?staticCsqAcquireLock@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAE@Z @ 0x1C000D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::staticCsqAcquireLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Csq[-1].ReservePointer + 20);
}
