/*
 * XREFs of sub_18003B3B4 @ 0x18003B3B4
 * Callers:
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_180046D25 @ 0x180046D25 (sub_180046D25.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18003B3B4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
    j_j__o_free(v2, a2);
  return j_j__o_free(a2, 56LL);
}
