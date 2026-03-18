/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18005264C
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005DBD0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180052DEC (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::Add(
        void **a1,
        _OWORD *a2,
        __int64 *a3)
{
  char *v6; // rax
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  char *v10; // r8
  __int64 v11; // rdx
  char *v12; // r8
  char *v13; // rdi
  __int64 v14; // rcx

  v6 = (char *)DefaultHeap::Realloc(*a1, 16LL * (*((_DWORD *)a1 + 4) + 1));
  if ( !v6 )
    return 0LL;
  v7 = (char *)a1[1];
  *a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 16LL * (*((_DWORD *)a1 + 4) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = (char *)*a1;
  v11 = 16LL * *((int *)a1 + 4);
  a1[1] = v8;
  v12 = &v10[v11];
  if ( v12 )
  {
    *(_OWORD *)v12 = *a2;
    v9 = (char *)a1[1];
  }
  v13 = &v9[v11];
  if ( &v9[v11] )
  {
    v14 = *a3;
    *(_QWORD *)v13 = *a3;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    *((_DWORD *)v13 + 2) = *((_DWORD *)a3 + 2);
  }
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
