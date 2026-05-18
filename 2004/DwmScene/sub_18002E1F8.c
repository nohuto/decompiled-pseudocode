/*
 * XREFs of sub_18002E1F8 @ 0x18002E1F8
 * Callers:
 *     sub_180120F86 @ 0x180120F86 (sub_180120F86.c)
 *     sub_18012112A @ 0x18012112A (sub_18012112A.c)
 *     sub_180121136 @ 0x180121136 (sub_180121136.c)
 *     sub_180126CCB @ 0x180126CCB (sub_180126CCB.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E1F8(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
