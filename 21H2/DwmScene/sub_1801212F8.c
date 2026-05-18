/*
 * XREFs of sub_1801212F8 @ 0x1801212F8
 * Callers:
 *     sub_180120440 @ 0x180120440 (sub_180120440.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011EA0C @ 0x18011EA0C (sub_18011EA0C.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1801212F8(_QWORD *a1)
{
  _QWORD *v1; // rsi
  __int64 *v3; // r15
  __int64 *v4; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18011EA0C((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180122420(v4 + 8);
    unknown_libname_103(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
