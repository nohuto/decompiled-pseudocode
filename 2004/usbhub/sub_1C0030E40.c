/*
 * XREFs of sub_1C0030E40 @ 0x1C0030E40
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C00489B8 @ 0x1C00489B8 (sub_1C00489B8.c)
 */

__int64 __fastcall sub_1C0030E40(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // r14
  PIO_SECURITY_CONTEXT SecurityContext; // rbp
  NTSTATUS v8; // eax
  unsigned int v9; // ebx

  sub_1C000F050(a1);
  v6 = sub_1C0011220(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
  }
  v8 = sub_1C00489B8(a1, SecurityContext, *((unsigned __int16 *)v6 + 714));
  a3->IoStatus.Status = v8;
  v9 = v8;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v9;
}
