/*
 * XREFs of sub_18002D5B0 @ 0x18002D5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_18002D5B0(_QWORD *a1, char a2)
{
  *a1 = &off_18003EAC8;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
