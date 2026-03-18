/*
 * XREFs of ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x18004549C
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChainRealization@@@Z @ 0x1800453E4 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChain.c)
 * Callees:
 *     <none>
 */

struct ISwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  if ( a2 < (unsigned __int64)((*((_QWORD *)this + 7) - v2) >> 3) )
    return *(struct ISwapChainRealization **)(v2 + 8LL * a2);
  return (struct ISwapChainRealization *)v3;
}
