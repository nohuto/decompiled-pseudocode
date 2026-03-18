/*
 * XREFs of ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124
 * Callers:
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180047F48 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180051FB0 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18005D23C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18005E290 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D0AE8 (-AddResourceNotifier@CD2DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D3D58 (-AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800D84CC (-AddResourceNotifier@CRenderTargetBitmap@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800DBDE8 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180167FD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801B9A3C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C22A4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180236400 (-AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180262DEC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180263640 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAXQEAPEAVIDeviceResourceNotify@@_K1@Z @ 0x180052224 (-_Change_array@-$vector@PEAVIDeviceResourceNotify@@V-$allocator@PEAVIDeviceResourceNotify@@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

__int64 __fastcall std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // r14
  char *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v4 = (a2 - (_BYTE *)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)&v13[8 * v4] = *a3;
  v14 = v13;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = (_BYTE *)a1[1] - a2;
    v14 = &v13[8 * v4 + 8];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<IDeviceResourceNotify *>::_Change_array(a1, v13, v8, v11);
  return (__int64)*a1 + 8 * v4;
}
