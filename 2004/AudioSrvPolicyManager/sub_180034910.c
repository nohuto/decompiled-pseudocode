/*
 * XREFs of sub_180034910 @ 0x180034910
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035110 @ 0x180035110 (sub_180035110.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_180034910(_QWORD *a1, char a2)
{
  *a1 = off_18003F5C8;
  sub_180035110();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
