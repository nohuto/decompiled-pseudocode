/*
 * XREFs of sub_180062EE0 @ 0x180062EE0
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

_QWORD *__fastcall sub_180062EE0(_QWORD *a1, char a2)
{
  *a1 = &off_18008D5E8;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}
