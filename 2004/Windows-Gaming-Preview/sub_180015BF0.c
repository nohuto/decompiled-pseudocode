/*
 * XREFs of sub_180015BF0 @ 0x180015BF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180015BF0(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
