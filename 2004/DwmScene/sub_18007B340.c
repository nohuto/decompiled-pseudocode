/*
 * XREFs of sub_18007B340 @ 0x18007B340
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_1800AF664 @ 0x1800AF664 (sub_1800AF664.c)
 *     sub_1800B02F8 @ 0x1800B02F8 (sub_1800B02F8.c)
 */

void __fastcall sub_18007B340(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800AF664(i[2]) == 1 )
      sub_1800B02F8(i[2]);
  }
}
