/*
 * XREFs of sub_180042BB0 @ 0x180042BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042B3C @ 0x180042B3C (sub_180042B3C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180042BB0(_QWORD *a1, char a2)
{
  sub_180042B3C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
