/*
 * XREFs of sub_1800CFD4C @ 0x1800CFD4C
 * Callers:
 *     sub_180127F68 @ 0x180127F68 (sub_180127F68.c)
 * Callees:
 *     sub_1800D0D80 @ 0x1800D0D80 (sub_1800D0D80.c)
 */

__int64 __fastcall sub_1800CFD4C(__int64 *a1)
{
  __int64 v2; // rcx

  sub_1800D0D80();
  v2 = *a1;
  *a1 = 0LL;
  return j_j__o_free(v2);
}
