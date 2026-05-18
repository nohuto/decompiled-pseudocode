/*
 * XREFs of sub_1801202D0 @ 0x1801202D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801201DC @ 0x1801201DC (sub_1801201DC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1801202D0(__int64 a1, char a2)
{
  sub_1801201DC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
