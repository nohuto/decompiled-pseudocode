/*
 * XREFs of ?bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z @ 0x1F4F08
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 */

int __thiscall MAPPER::bWin31BitmapWidthScaling(MAPPER *this, int a2, int a3, int *a4)
{
  if ( SafeDivide<long,long,long>(a2 - (a3 + 1) / 2, a3, a4) )
    return 0;
  ++*a4;
  return 1;
}
