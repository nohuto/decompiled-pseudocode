/*
 * XREFs of sub_18003B6F0 @ 0x18003B6F0
 * Callers:
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046CCB @ 0x180046CCB (sub_180046CCB.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18003B6F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1, 56LL);
  return result;
}
