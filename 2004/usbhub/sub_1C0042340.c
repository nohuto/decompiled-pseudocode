/*
 * XREFs of sub_1C0042340 @ 0x1C0042340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C005BC84 @ 0x1C005BC84 (sub_1C005BC84.c)
 */

__int64 __fastcall sub_1C0042340(__int64 a1, IRP *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx

  v3 = sub_1C005BC84();
  a2->IoStatus.Status = v3;
  v4 = v3;
  IofCompleteRequest(a2, 0);
  return v4;
}
