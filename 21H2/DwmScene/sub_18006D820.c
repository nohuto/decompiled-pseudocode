/*
 * XREFs of sub_18006D820 @ 0x18006D820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D75C @ 0x18006D75C (sub_18006D75C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18006D820(_QWORD *a1, char a2)
{
  sub_18006D75C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
