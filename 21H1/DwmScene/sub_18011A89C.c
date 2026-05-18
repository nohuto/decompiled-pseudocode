/*
 * XREFs of sub_18011A89C @ 0x18011A89C
 * Callers:
 *     sub_18012B307 @ 0x18012B307 (sub_18012B307.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18011A89C(_QWORD *a1)
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
      sub_18011CB50(v3 + 6);
      unknown_libname_101(v3 + 2);
      result = (_QWORD *)j_j__o_free(v3);
    }
  }
  return result;
}
