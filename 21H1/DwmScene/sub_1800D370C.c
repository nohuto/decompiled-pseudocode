/*
 * XREFs of sub_1800D370C @ 0x1800D370C
 * Callers:
 *     sub_1801280E2 @ 0x1801280E2 (sub_1801280E2.c)
 * Callees:
 *     sub_1800D4EA4 @ 0x1800D4EA4 (sub_1800D4EA4.c)
 */

__int64 __fastcall sub_1800D370C(__int64 *a1)
{
  __int64 v2; // rcx

  sub_1800D4EA4();
  v2 = *a1;
  *a1 = 0LL;
  return j_j__o_free(v2);
}
