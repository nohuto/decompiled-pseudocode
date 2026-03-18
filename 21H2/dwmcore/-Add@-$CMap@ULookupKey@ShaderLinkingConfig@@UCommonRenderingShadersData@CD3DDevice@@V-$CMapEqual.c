/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18003A778
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18003AF88 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?InternalSetAtIndex@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAXHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18003B854 (-InternalSetAtIndex@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevic.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx

  v6 = DefaultHeap::Realloc(*(void **)a1, 16LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = DefaultHeap::Realloc(v7, 16LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::InternalSetAtIndex(
    a1,
    v9,
    a2,
    a3);
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
