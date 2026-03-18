/*
 * XREFs of ?bStockSurface@SURFACE@@QAEHXZ @ 0x1FAAA9
 * Callers:
 *     _vMirrorIncludeNotifyWrap@12 @ 0x93030 (_vMirrorIncludeNotifyWrap@12.c)
 *     _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326 (_vAccNotifyDeleteSurfaceWrap@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 33) & 0x200) != 0;
}
