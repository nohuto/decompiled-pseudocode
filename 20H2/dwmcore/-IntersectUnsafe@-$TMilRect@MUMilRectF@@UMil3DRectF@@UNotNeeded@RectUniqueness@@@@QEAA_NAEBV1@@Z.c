/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B3840
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008FBC0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800925F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180094DD0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801828F4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  char result; // al

  if ( *(float *)a2 > *(float *)a1 )
    *(_DWORD *)a1 = *(_DWORD *)a2;
  v2 = *(float *)(a2 + 4);
  if ( v2 > *(float *)(a1 + 4) )
    *(float *)(a1 + 4) = v2;
  v3 = *(float *)(a2 + 8);
  v4 = *(float *)(a1 + 8);
  if ( v4 > v3 )
  {
    *(float *)(a1 + 8) = v3;
    v4 = v3;
  }
  v5 = *(float *)(a2 + 12);
  v6 = *(float *)(a1 + 12);
  if ( v6 > v5 )
  {
    *(float *)(a1 + 12) = v5;
    v6 = v5;
    v4 = *(float *)(a1 + 8);
  }
  if ( v4 > *(float *)a1 && v6 > *(float *)(a1 + 4) )
    return 1;
  result = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
