/*
 * XREFs of sub_1800C61D8 @ 0x1800C61D8
 * Callers:
 *     sub_1800B819C @ 0x1800B819C (sub_1800B819C.c)
 *     sub_1800B8224 @ 0x1800B8224 (sub_1800B8224.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800C61D8(_QWORD *a1)
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
      unknown_libname_101(v3 + 2);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
