/*
 * XREFs of sub_18000F3B0 @ 0x18000F3B0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18000F3B0(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
