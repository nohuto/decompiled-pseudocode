/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800900DC
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18008F4E8 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x1800900A0 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180091E20 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D79D8 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED7C4 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE2F0 (-Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258114 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  bool result; // al
  int v2; // edx
  float *i; // rcx

  result = 1;
  if ( !*((_BYTE *)this + 4456) )
  {
    if ( *((_BYTE *)this + 4458) )
      return *((_DWORD *)this + 713) == 0;
    v2 = 0;
    for ( i = (float *)((char *)this + 1612); *(i - 1) <= *(i - 3) || *i <= *(i - 2); i += 4 )
    {
      if ( (unsigned int)++v2 >= 8 )
        return result;
    }
  }
  return 0;
}
