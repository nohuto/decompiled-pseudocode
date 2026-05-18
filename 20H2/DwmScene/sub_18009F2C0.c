/*
 * XREFs of sub_18009F2C0 @ 0x18009F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EF18 @ 0x18009EF18 (sub_18009EF18.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18009F2C0(_QWORD *a1, char a2)
{
  sub_18009EF18(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
