/*
 * XREFs of sub_180080C10 @ 0x180080C10
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_1800B4F34 @ 0x1800B4F34 (sub_1800B4F34.c)
 *     sub_1800B5BC8 @ 0x1800B5BC8 (sub_1800B5BC8.c)
 */

void __fastcall sub_180080C10(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800B4F34(i[2]) == 1 )
      sub_1800B5BC8(i[2]);
  }
}
