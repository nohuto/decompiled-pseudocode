/*
 * XREFs of sub_18003EDB0 @ 0x18003EDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E9E8 @ 0x18003E9E8 (sub_18003E9E8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18003EDB0(_QWORD *a1, char a2)
{
  sub_18003E9E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
