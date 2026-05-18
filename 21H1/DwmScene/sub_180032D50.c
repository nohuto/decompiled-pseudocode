/*
 * XREFs of sub_180032D50 @ 0x180032D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032C14 @ 0x180032C14 (sub_180032C14.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180032D50(_QWORD *a1, char a2)
{
  sub_180032C14(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
