/*
 * XREFs of sub_180081170 @ 0x180081170
 * Callers:
 *     sub_180077A18 @ 0x180077A18 (sub_180077A18.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_1800A7B28 @ 0x1800A7B28 (sub_1800A7B28.c)
 *     sub_1800A7BAC @ 0x1800A7BAC (sub_1800A7BAC.c)
 *     sub_1800A83E0 @ 0x1800A83E0 (sub_1800A83E0.c)
 *     sub_1800AB19C @ 0x1800AB19C (sub_1800AB19C.c)
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180081170(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      unknown_libname_102((__int64)(v3 + 2), 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
