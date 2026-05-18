/*
 * XREFs of sub_1800C5E68 @ 0x1800C5E68
 * Callers:
 *     sub_18012788D @ 0x18012788D (sub_18012788D.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 */

__int64 __fastcall sub_1800C5E68(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  unknown_libname_101((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
