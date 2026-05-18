/*
 * XREFs of sub_18001A3E0 @ 0x18001A3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001985C @ 0x18001985C (sub_18001985C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18001A3E0(_QWORD *a1, char a2)
{
  sub_18001985C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
