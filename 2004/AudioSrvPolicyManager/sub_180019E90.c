/*
 * XREFs of sub_180019E90 @ 0x180019E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019ECC @ 0x180019ECC (sub_180019ECC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall sub_180019E90(void *a1, char a2)
{
  sub_180019ECC();
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
