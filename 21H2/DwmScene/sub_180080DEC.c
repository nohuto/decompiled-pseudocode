/*
 * XREFs of sub_180080DEC @ 0x180080DEC
 * Callers:
 *     sub_18012E983 @ 0x18012E983 (sub_18012E983.c)
 * Callees:
 *     sub_1800784C0 @ 0x1800784C0 (sub_1800784C0.c)
 */

_QWORD *__fastcall sub_180080DEC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800784C0(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
