/*
 * XREFs of ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C0114C90
 * Callers:
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C000C758 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C009E620 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0114C54 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C012243C (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0141B24 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C01534A0 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<long,long,long>(int a1, int a2, int *a3)
{
  if ( !a2 || a1 == 0x80000000 && a2 == -1 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
