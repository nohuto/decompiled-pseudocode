/*
 * XREFs of ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x180069B00
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x180069980 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChai.c)
 * Callees:
 *     <none>
 */

struct ISwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 10);
  v3 = 0LL;
  if ( a2 < (unsigned __int64)((*((_QWORD *)this + 11) - v2) >> 3) )
    return *(struct ISwapChainRealization **)(v2 + 8LL * a2);
  return (struct ISwapChainRealization *)v3;
}
