/*
 * XREFs of sub_180121378 @ 0x180121378
 * Callers:
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 *     sub_1801212B8 @ 0x1801212B8 (sub_1801212B8.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180121378(_QWORD *a1)
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
      sub_180122420(v3 + 6);
      unknown_libname_103(v3 + 2);
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
