/*
 * XREFs of IopPnPCompleteRequest @ 0x14037052C
 * Callers:
 *     IopPnPDispatch @ 0x140748B90 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
