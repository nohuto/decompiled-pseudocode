/*
 * XREFs of IopPnPCompleteRequest @ 0x1402DCDD8
 * Callers:
 *     IopPnPDispatch @ 0x140763C50 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
