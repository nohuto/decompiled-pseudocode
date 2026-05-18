/*
 * XREFs of sub_1800A59A4 @ 0x1800A59A4
 * Callers:
 *     sub_1800A50F8 @ 0x1800A50F8 (sub_1800A50F8.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A59A4(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      unknown_libname_100((__int64)(v3 + 2), 0);
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
