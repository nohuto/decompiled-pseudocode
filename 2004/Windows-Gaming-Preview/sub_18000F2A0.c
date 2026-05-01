/*
 * XREFs of sub_18000F2A0 @ 0x18000F2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002777C @ 0x18002777C (sub_18002777C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000F2A0(__int64 a1, char a2)
{
  sub_18002777C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 312LL);
  return a1;
}
