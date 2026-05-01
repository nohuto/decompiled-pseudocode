/*
 * XREFs of sub_180076EC0 @ 0x180076EC0
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

_DWORD *__fastcall sub_180076EC0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}
