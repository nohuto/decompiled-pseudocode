/*
 * XREFs of sub_1800B34C0 @ 0x1800B34C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2FE8 @ 0x1800B2FE8 (sub_1800B2FE8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B34C0(_QWORD *a1, char a2)
{
  sub_1800B2FE8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
