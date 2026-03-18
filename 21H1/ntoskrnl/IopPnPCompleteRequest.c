/*
 * XREFs of IopPnPCompleteRequest @ 0x14036D9B0
 * Callers:
 *     IopPnPDispatch @ 0x140738100 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
