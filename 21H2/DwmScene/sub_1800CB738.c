/*
 * XREFs of sub_1800CB738 @ 0x1800CB738
 * Callers:
 *     sub_18012D1A5 @ 0x18012D1A5 (sub_18012D1A5.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 */

__int64 __fastcall sub_1800CB738(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  unknown_libname_103((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
