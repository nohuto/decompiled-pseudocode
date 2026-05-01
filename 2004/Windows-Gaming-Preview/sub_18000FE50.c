/*
 * XREFs of sub_18000FE50 @ 0x18000FE50
 * Callers:
 *     sub_1800462DF @ 0x1800462DF (sub_1800462DF.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000FE50(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1, 48LL);
  return result;
}
