/*
 * XREFs of ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x18017961C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180179E70 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x180183A5C (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<CRegion,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = operator new(0x58uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CRegion>::`vftable';
    *((_QWORD *)v2 + 2) = v2 + 6;
    v2[6] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
