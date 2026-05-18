/*
 * XREFs of sub_180067F50 @ 0x180067F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067E8C @ 0x180067E8C (sub_180067E8C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180067F50(_QWORD *a1, char a2)
{
  sub_180067E8C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
