/*
 * XREFs of sub_18000D910 @ 0x18000D910
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall sub_18000D910(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
