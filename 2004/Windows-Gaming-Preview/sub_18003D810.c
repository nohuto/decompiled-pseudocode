/*
 * XREFs of sub_18003D810 @ 0x18003D810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D84C @ 0x18003D84C (sub_18003D84C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18003D810(__int64 a1, char a2)
{
  sub_18003D84C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 48LL);
  return a1;
}
