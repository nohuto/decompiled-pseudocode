/*
 * XREFs of ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180069750
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180069110 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180069780 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x18006B75C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3) <= 1 )
    return *((_DWORD *)this + 31) == 3;
  return v1;
}
