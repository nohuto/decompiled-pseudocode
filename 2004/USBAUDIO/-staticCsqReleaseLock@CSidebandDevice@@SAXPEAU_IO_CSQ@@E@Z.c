/*
 * XREFs of ?staticCsqReleaseLock@CSidebandDevice@@SAXPEAU_IO_CSQ@@E@Z @ 0x1C000E1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::staticCsqReleaseLock(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)Csq[-1].ReservePointer + 20, Irql);
}
