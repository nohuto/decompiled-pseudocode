/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DEB0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x18009C4B0 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800CF21C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016D010 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BE400 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x1801BE954 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x18026713C (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

void __fastcall CD3DResource::RemoveResourceNotifier(CD3DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 9);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this + 8); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 9) -= 8LL;
  }
}
