/*
 * XREFs of sub_1C001CF10 @ 0x1C001CF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1C001CF10(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].Type, Irql);
}
