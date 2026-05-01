/*
 * XREFs of sub_180042BB0 @ 0x180042BB0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x1800450E0 (j__o_free.c)
 */

__int64 __fastcall sub_180042BB0(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
