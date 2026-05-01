/*
 * XREFs of sub_180011D50 @ 0x180011D50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180011D50(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 16LL);
  return a1;
}
