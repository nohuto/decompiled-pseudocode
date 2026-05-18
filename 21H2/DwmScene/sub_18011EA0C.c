/*
 * XREFs of sub_18011EA0C @ 0x18011EA0C
 * Callers:
 *     sub_18011E98C @ 0x18011E98C (sub_18011E98C.c)
 *     sub_18011EA0C @ 0x18011EA0C (sub_18011EA0C.c)
 *     sub_1801212F8 @ 0x1801212F8 (sub_1801212F8.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011EA0C @ 0x18011EA0C (sub_18011EA0C.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011EA0C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rsi
  __int64 *v6; // rdi
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18011EA0C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180122420(v6 + 8);
    unknown_libname_103(v6 + 4);
  }
  return result;
}
