/*
 * XREFs of sub_18012016C @ 0x18012016C
 * Callers:
 *     sub_180130C1F @ 0x180130C1F (sub_180130C1F.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18012016C(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  if ( a1[2] )
  {
    result = (_QWORD *)a1[1];
    *result = 0LL;
    v2 = (_QWORD *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      sub_180122420(v3 + 6);
      unknown_libname_103(v3 + 2);
      result = (_QWORD *)j_j__o_free(v3);
    }
  }
  return result;
}
