/*
 * XREFs of sub_18012124C @ 0x18012124C
 * Callers:
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18012124C(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 = 0LL;
  *a2 = *(_QWORD *)a3;
  **(_QWORD **)(a3 + 8) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *(_QWORD *)(a3 + 8);
  sub_180122420(a3 + 48);
  unknown_libname_103((__int64 *)(a3 + 16));
  j_j__o_free(a3);
  --*(_QWORD *)(a1 + 8);
  return a2;
}
