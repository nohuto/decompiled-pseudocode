/*
 * XREFs of HvlpAllowFastFlushList @ 0x1403906FC
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1403900FC (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1404FAEFC (HvlpFlushRangeListTbEx.c)
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
