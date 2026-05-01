/*
 * XREFs of sub_18001EFF0 @ 0x18001EFF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18001EFF0(_QWORD *a1, char a2)
{
  *a1 = &off_18004ADE8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 8LL);
  return a1;
}
