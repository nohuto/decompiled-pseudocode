/*
 * XREFs of sub_180042890 @ 0x180042890
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042820 @ 0x180042820 (sub_180042820.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180042890(_QWORD *a1, char a2)
{
  sub_180042820(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
