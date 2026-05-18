/*
 * XREFs of sub_18011B904 @ 0x18011B904
 * Callers:
 *     sub_18011A8FC @ 0x18011A8FC (sub_18011A8FC.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011B904(_QWORD *a1)
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
      sub_18011CB50(v3 + 6);
      unknown_libname_101(v3 + 2);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
