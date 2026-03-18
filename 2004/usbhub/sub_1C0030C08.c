/*
 * XREFs of sub_1C0030C08 @ 0x1C0030C08
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 */

__int64 __fastcall sub_1C0030C08(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rbx
  _DWORD *SecurityContext; // r10
  unsigned int v8; // ebx

  v6 = sub_1C000F050(a1);
  sub_1C0011220(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (v6[640] & 1) != 0 )
  {
    v8 = 0;
    if ( SecurityContext )
      ++*SecurityContext;
    else
      v8 = -1073741811;
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
  }
  else
  {
    if ( SecurityContext )
      ++*SecurityContext;
    v8 = sub_1C0029E7C(a1, a3);
  }
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v8;
}
