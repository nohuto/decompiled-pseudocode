/*
 * XREFs of sub_1800FCDF4 @ 0x1800FCDF4
 * Callers:
 *     sub_18012F5EF @ 0x18012F5EF (sub_18012F5EF.c)
 * Callees:
 *     sub_1800FCC24 @ 0x1800FCC24 (sub_1800FCC24.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FCDF4(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800FCC24(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
