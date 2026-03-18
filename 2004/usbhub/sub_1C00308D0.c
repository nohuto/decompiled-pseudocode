/*
 * XREFs of sub_1C00308D0 @ 0x1C00308D0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C002B3F4 @ 0x1C002B3F4 (sub_1C002B3F4.c)
 */

__int64 __fastcall sub_1C00308D0(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx

  v5 = sub_1C002B3F4(
         a1,
         (__int64)a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
         a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  a3->IoStatus.Status = v5;
  v6 = v5;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v6;
}
