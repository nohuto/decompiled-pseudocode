/*
 * XREFs of sub_18003C930 @ 0x18003C930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003C96C @ 0x18003C96C (sub_18003C96C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18003C930(__int64 a1, char a2)
{
  sub_18003C96C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
