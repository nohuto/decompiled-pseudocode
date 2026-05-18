/*
 * XREFs of sub_18011C0F0 @ 0x18011C0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011C05C @ 0x18011C05C (sub_18011C05C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18011C0F0(_QWORD *a1, char a2)
{
  sub_18011C05C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
