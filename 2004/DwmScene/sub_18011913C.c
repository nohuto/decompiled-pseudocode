/*
 * XREFs of sub_18011913C @ 0x18011913C
 * Callers:
 *     sub_1801190BC @ 0x1801190BC (sub_1801190BC.c)
 *     sub_18011913C @ 0x18011913C (sub_18011913C.c)
 *     sub_18011BA28 @ 0x18011BA28 (sub_18011BA28.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011913C @ 0x18011913C (sub_18011913C.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011913C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rsi
  __int64 *v6; // rdi
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18011913C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18011CB50(v6 + 8);
    unknown_libname_101(v6 + 4);
  }
  return result;
}
