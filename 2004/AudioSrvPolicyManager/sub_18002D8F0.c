/*
 * XREFs of sub_18002D8F0 @ 0x18002D8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D92C @ 0x18002D92C (sub_18002D92C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall sub_18002D8F0(void *a1, char a2)
{
  sub_18002D92C();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
