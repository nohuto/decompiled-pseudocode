/*
 * XREFs of KiIsFlushEntire @ 0x14051461C
 * Callers:
 *     KiPreprocessFlushTb @ 0x14023A850 (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B4498 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsFlushEntire(int a1)
{
  if ( KiFlushPcid )
    return 0;
  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
      return 0;
  }
  else if ( a1 && a1 <= 2 )
  {
    return 0;
  }
  return 1;
}
