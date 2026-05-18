/*
 * XREFs of sub_1801210B4 @ 0x1801210B4
 * Callers:
 *     sub_18011EBD8 @ 0x18011EBD8 (sub_18011EBD8.c)
 *     sub_180130C43 @ 0x180130C43 (sub_180130C43.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 */

__int64 __fastcall sub_1801210B4(__int64 a1, __int64 a2)
{
  sub_180122420(a2 + 64);
  unknown_libname_103((__int64 *)(a2 + 32));
  return j_j__o_free(a2);
}
