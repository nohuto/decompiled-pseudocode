/*
 * XREFs of sub_180011D10 @ 0x180011D10
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180011D10(__int64 a1, char a2)
{
  *(_QWORD *)a1 = off_180048D88;
  *(_DWORD *)(a1 + 16) = -1073741823;
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
