/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180054C20
 * Callers:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180056EAC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800D6D0C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801686B0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B9BF0 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x1801BA144 (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802638EC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
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
