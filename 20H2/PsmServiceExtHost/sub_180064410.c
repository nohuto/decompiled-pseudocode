/*
 * XREFs of sub_180064410 @ 0x180064410
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

_QWORD *__fastcall sub_180064410(_QWORD *a1, char a2)
{
  *a1 = off_18008D910;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}
