/*
 * XREFs of sub_1800D561C @ 0x1800D561C
 * Callers:
 *     sub_18012D880 @ 0x18012D880 (sub_18012D880.c)
 * Callees:
 *     sub_1800D6650 @ 0x1800D6650 (sub_1800D6650.c)
 */

__int64 __fastcall sub_1800D561C(__int64 *a1)
{
  __int64 v2; // rcx

  sub_1800D6650();
  v2 = *a1;
  *a1 = 0LL;
  return j_j__o_free(v2);
}
