/*
 * XREFs of sub_18007EA90 @ 0x18007EA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007DF60 @ 0x18007DF60 (sub_18007DF60.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18007EA90(_QWORD *a1, char a2)
{
  sub_18007DF60(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
