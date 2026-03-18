/*
 * XREFs of sub_1C0055C10 @ 0x1C0055C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0055C10(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
