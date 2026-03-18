/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C00547CC
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C0054578 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C0270500 (GreGetHwndUpdateIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  int v1; // edx

  v1 = 0;
  if ( g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
    v1 = 8;
  return (unsigned int)v1 | *((_DWORD *)this + 53);
}
