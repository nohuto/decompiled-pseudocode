/*
 * XREFs of sub_18008C1C0 @ 0x18008C1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BD60 @ 0x18008BD60 (sub_18008BD60.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18008C1C0(_QWORD *a1, char a2)
{
  sub_18008BD60(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
