/*
 * XREFs of HvlpAllowFastFlushList @ 0x14038D07C
 * Callers:
 *     HvlpFlushRangeListTb @ 0x14038CA7C (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1404F54FC (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAllowFastFlushList(char a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( (HvlEnlightenments & 0x80u) != 0 && (!a1 || (unsigned int)(a2 + 1) <= 0xC) )
    return 1;
  return v2;
}
