/*
 * XREFs of sub_18001B0E0 @ 0x18001B0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B11C @ 0x18001B11C (sub_18001B11C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001B0E0(__int64 a1, char a2)
{
  sub_18001B11C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
