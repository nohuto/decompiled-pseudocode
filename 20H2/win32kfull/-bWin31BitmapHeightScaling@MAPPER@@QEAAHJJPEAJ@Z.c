/*
 * XREFs of ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0115CB4
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C005A300 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0144154 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C0115CF0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

_BOOL8 __fastcall MAPPER::bWin31BitmapHeightScaling(MAPPER *this, int a2, unsigned int a3, int *a4)
{
  return (unsigned int)SafeDivide<long,long,long>((unsigned int)(a2 + (int)a3 / 4), a3, a4) == 0;
}
