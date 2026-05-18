/*
 * XREFs of sub_180121064 @ 0x180121064
 * Callers:
 *     sub_180130E36 @ 0x180130E36 (sub_180130E36.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 */

__int64 __fastcall sub_180121064(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_180122420(a2 + 48);
  unknown_libname_103((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
