/*
 * XREFs of sub_1C0058540 @ 0x1C0058540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 */

void __fastcall sub_1C0058540(PIO_CSQ Csq, PIRP Irp)
{
  sub_1C0058A58(Csq[-5].CsqReleaseLock, Csq[-10].CsqRemoveIrp, Irp, 6LL, 0);
}
