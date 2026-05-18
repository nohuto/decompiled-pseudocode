/*
 * XREFs of sub_180111940 @ 0x180111940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011141C @ 0x18011141C (sub_18011141C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180111940(_QWORD *a1, char a2)
{
  sub_18011141C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
