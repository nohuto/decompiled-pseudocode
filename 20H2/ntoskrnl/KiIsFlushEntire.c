/*
 * XREFs of KiIsFlushEntire @ 0x140517F4C
 * Callers:
 *     KiPreprocessFlushTb @ 0x1402BFF00 (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B5E58 (KeFlushCurrentTbOnly.c)
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
