/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023DCA0
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800569F0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017E6C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023DCE8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 484) || byte_18034D620 )
    return 1;
  return result;
}
