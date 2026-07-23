/*
 * XREFs of IoCsqInsertIrp @ 0x140225DF0
 * Callers:
 *     <none>
 * Callees:
 *     IoCsqInsertIrpEx @ 0x140225E10 (IoCsqInsertIrpEx.c)
 */

void __stdcall IoCsqInsertIrp(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context)
{
  IoCsqInsertIrpEx(Csq, Irp, Context, 0LL);
}
