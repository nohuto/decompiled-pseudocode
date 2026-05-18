/*
 * XREFs of sub_18007B51C @ 0x18007B51C
 * Callers:
 *     sub_18012906B @ 0x18012906B (sub_18012906B.c)
 * Callees:
 *     sub_180072BF0 @ 0x180072BF0 (sub_180072BF0.c)
 */

_QWORD *__fastcall sub_18007B51C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_180072BF0(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
