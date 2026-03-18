/*
 * XREFs of ?bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z @ 0xC1EE4
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 */

BOOL __thiscall MAPPER::bWin31BitmapHeightScaling(MAPPER *this, int a2, int a3, int *a4)
{
  return SafeDivide<long,long,long>(a4) == 0;
}
