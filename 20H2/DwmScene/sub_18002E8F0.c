/*
 * XREFs of sub_18002E8F0 @ 0x18002E8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E39C @ 0x18002E39C (sub_18002E39C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E8F0(_QWORD *a1, char a2)
{
  sub_18002E39C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
