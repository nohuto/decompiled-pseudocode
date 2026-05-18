/*
 * XREFs of sub_18011BAA8 @ 0x18011BAA8
 * Callers:
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 *     sub_18011B9E8 @ 0x18011B9E8 (sub_18011B9E8.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011BAA8(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  __int64 result; // rax

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
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 8LL) = *a1;
  a1[1] = 0LL;
  return result;
}
