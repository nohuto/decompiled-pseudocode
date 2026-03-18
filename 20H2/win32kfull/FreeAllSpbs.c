/*
 * XREFs of FreeAllSpbs @ 0x1C002A9A0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxRealizePalette @ 0x1C0113460 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C0219E94 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = gpDispInfo;
    if ( !*(_QWORD *)(gpDispInfo + 32LL) )
      break;
    FreeSpb();
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
