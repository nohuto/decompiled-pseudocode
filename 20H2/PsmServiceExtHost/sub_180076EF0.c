/*
 * XREFs of sub_180076EF0 @ 0x180076EF0
 * Callers:
 *     sub_180077220 @ 0x180077220 (sub_180077220.c)
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

_DWORD *__fastcall sub_180076EF0(_DWORD *a1, char a2)
{
  *(_QWORD *)a1 = off_18008D938;
  a1[4] = -1073741823;
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}
