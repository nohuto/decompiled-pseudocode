/*
 * XREFs of sub_1800CBAA8 @ 0x1800CBAA8
 * Callers:
 *     sub_1800BDA6C @ 0x1800BDA6C (sub_1800BDA6C.c)
 *     sub_1800BDAF4 @ 0x1800BDAF4 (sub_1800BDAF4.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CBAA8(_QWORD *a1)
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
      unknown_libname_103(v3 + 2);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
