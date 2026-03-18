/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032CF0
 * Callers:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180035878 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18007D900 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800FF044 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x18020D0F0 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x18020D67C (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802A614C (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CD3DResource::RemoveResourceNotifier(CD3DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 10);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 9); i != v2; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
      *((_QWORD *)this + 10) -= 8LL;
      return;
    }
  }
}
