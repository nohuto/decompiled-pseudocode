/*
 * XREFs of sub_180033510 @ 0x180033510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_180033510(_QWORD *a1, char a2)
{
  *a1 = &off_18003F6B0;
  _o_free(a1[1]);
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
