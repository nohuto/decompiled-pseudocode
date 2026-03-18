/*
 * XREFs of ?IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z @ 0x201818
 * Callers:
 *     ?MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x202500 (-MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     _MulProcessChildRedirectionDfbSurfaces2@8 @ 0x2068FF (_MulProcessChildRedirectionDfbSurfaces2@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMetaRedirectionBitmap(int this)
{
  return *(_WORD *)(this + 48) == 3 && (*(_BYTE *)(this + 60) & 9) != 0;
}
