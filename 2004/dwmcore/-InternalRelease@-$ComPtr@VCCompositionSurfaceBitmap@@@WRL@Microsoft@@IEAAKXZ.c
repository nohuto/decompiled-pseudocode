/*
 * XREFs of ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BAA80
 * Callers:
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x1801BAC2C (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEM.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801BAE64 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(CRenderTargetBitmap **a1)
{
  CRenderTargetBitmap *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CRenderTargetBitmap::Release(v1);
  }
  return result;
}
