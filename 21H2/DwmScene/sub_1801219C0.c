/*
 * XREFs of sub_1801219C0 @ 0x1801219C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012192C @ 0x18012192C (sub_18012192C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1801219C0(_QWORD *a1, char a2)
{
  sub_18012192C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
