/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800B9990
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x1800B9500 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800B9F4C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016A4B0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BBAE0 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x1801BC034 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802646CC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
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
