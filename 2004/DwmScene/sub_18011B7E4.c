/*
 * XREFs of sub_18011B7E4 @ 0x18011B7E4
 * Callers:
 *     sub_180119308 @ 0x180119308 (sub_180119308.c)
 *     sub_18012B32B @ 0x18012B32B (sub_18012B32B.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 */

__int64 __fastcall sub_18011B7E4(__int64 a1, __int64 a2)
{
  sub_18011CB50(a2 + 64);
  unknown_libname_101((__int64 *)(a2 + 32));
  return j_j__o_free(a2);
}
