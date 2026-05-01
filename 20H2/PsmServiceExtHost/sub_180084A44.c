/*
 * XREFs of sub_180084A44 @ 0x180084A44
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

char __fastcall sub_180084A44(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    sub_18003667C((char *)qword_1800B3D90, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = sub_18003667C((char *)qword_1800B3DB0, a1 + 88, 0);
  return (char)v2;
}
