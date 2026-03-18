/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18000E5C0
 * Callers:
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1800083EC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x1800EEA6C (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v7; // rbx
  unsigned int i; // r8d
  unsigned int v10; // [rsp+Ch] [rbp+Ch]

  LODWORD(v4) = 0;
  v5 = -1;
  v10 = 0;
  if ( a3 )
  {
    v4 = *((_QWORD *)a3 + 5);
    v10 = HIDWORD(v4);
  }
  v7 = *((_QWORD *)this + 11);
  for ( i = 0; i < -1227133513 * (unsigned int)((*((_QWORD *)this + 12) - v7) >> 5); ++i )
  {
    if ( (!a2 || *(const struct CVisual **)(224LL * i + v7 + 8) == a2)
      && (!a3 || *(_QWORD *)(*(_QWORD *)(224LL * i + v7 + 16) + 40LL) == __PAIR64__(v10, v4))
      && (!a4 || *(_QWORD *)(224LL * i + v7 + 24) == a4) )
    {
      return i;
    }
  }
  return v5;
}
