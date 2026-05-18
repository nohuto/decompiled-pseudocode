/*
 * XREFs of sub_1801211D4 @ 0x1801211D4
 * Callers:
 *     sub_1801201CC @ 0x1801201CC (sub_1801201CC.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1801211D4(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_180122420(v3 + 6);
      unknown_libname_103(v3 + 2);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
