/*
 * XREFs of sub_18011B794 @ 0x18011B794
 * Callers:
 *     sub_18012B51E @ 0x18012B51E (sub_18012B51E.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 */

__int64 __fastcall sub_18011B794(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_18011CB50(a2 + 48);
  unknown_libname_101((__int64 *)(a2 + 16));
  return j_j__o_free(a2);
}
