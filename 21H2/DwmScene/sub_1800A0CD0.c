/*
 * XREFs of sub_1800A0CD0 @ 0x1800A0CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0A5C @ 0x1800A0A5C (sub_1800A0A5C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800A0CD0(_QWORD *a1, char a2)
{
  sub_1800A0A5C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
