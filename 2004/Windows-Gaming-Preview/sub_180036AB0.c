/*
 * XREFs of sub_180036AB0 @ 0x180036AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800351CC @ 0x1800351CC (sub_1800351CC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180036AB0(__int64 a1, char a2)
{
  sub_1800351CC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 224LL);
  return a1;
}
