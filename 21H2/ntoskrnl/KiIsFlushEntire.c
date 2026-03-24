/*
 * XREFs of KiIsFlushEntire @ 0x140519A8C
 * Callers:
 *     KiPreprocessFlushTb @ 0x1402316E0 (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7498 (KeFlushCurrentTbOnly.c)
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
