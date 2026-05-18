/*
 * XREFs of sub_18008FFD0 @ 0x18008FFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008FE00 @ 0x18008FE00 (sub_18008FE00.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18008FFD0(_QWORD *a1, char a2)
{
  sub_18008FE00(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
