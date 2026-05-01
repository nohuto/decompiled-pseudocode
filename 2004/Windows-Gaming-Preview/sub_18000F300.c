/*
 * XREFs of sub_18000F300 @ 0x18000F300
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000F300(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
    return j_j__o_free(a1, 16LL);
  return result;
}
