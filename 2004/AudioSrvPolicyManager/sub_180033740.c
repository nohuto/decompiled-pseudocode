/*
 * XREFs of sub_180033740 @ 0x180033740
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033378 @ 0x180033378 (sub_180033378.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_180033740(_QWORD *a1, char a2)
{
  *a1 = &off_18003F678;
  _o_free(a1[17]);
  sub_180033378(a1 + 1);
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
