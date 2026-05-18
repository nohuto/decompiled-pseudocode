/*
 * XREFs of sub_1800AB19C @ 0x1800AB19C
 * Callers:
 *     sub_1800A7C84 @ 0x1800A7C84 (sub_1800A7C84.c)
 *     sub_18012C916 @ 0x18012C916 (sub_18012C916.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 */

__int64 __fastcall sub_1800AB19C(__int64 a1, __int64 a2)
{
  sub_1800258BC((__int64 *)(a2 + 56), a2 + 56);
  sub_180081170((_QWORD *)(a2 + 40));
  return j_j__o_free(a2);
}
