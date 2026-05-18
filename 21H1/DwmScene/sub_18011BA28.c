/*
 * XREFs of sub_18011BA28 @ 0x18011BA28
 * Callers:
 *     sub_18011AB70 @ 0x18011AB70 (sub_18011AB70.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011913C @ 0x18011913C (sub_18011913C.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011BA28(_QWORD *a1)
{
  _QWORD *v1; // rsi
  __int64 *v3; // r15
  __int64 *v4; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18011913C((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_18011CB50(v4 + 8);
    unknown_libname_101(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
