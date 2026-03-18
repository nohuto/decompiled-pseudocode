/*
 * XREFs of ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z @ 0xC1EE4 (-bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810 (-bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z.c)
 *     ?bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z @ 0xE29E4 (-bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z @ 0x1F4F08 (-bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3 (-MirrorWindowOrg@DC@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall SafeDivide<long,long,long>(int a1, int a2, int *a3)
{
  if ( !a2 || a1 == 0x80000000 && a2 == -1 )
    return -2147467259;
  *a3 = a1 / a2;
  return 0;
}
