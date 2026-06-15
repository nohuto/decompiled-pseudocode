/*
 * XREFs of sub_180013DE0 @ 0x180013DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall sub_180013DE0(void *a1, char a2)
{
  sub_180014EDC();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
