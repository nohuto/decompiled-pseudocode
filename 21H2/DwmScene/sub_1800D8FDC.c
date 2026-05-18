/*
 * XREFs of sub_1800D8FDC @ 0x1800D8FDC
 * Callers:
 *     sub_18012D9FA @ 0x18012D9FA (sub_18012D9FA.c)
 * Callees:
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 */

__int64 __fastcall sub_1800D8FDC(__int64 *a1)
{
  __int64 v2; // rcx

  sub_1800DA774();
  v2 = *a1;
  *a1 = 0LL;
  return j_j__o_free(v2);
}
