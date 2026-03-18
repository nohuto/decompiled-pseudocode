/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0
 * Callers:
 *     LinkLightShader @ 0x180018264 (LinkLightShader.c)
 *     AppendLights @ 0x18001845C (AppendLights.c)
 *     AppendShaderBody @ 0x180033CF8 (AppendShaderBody.c)
 *     ApplyTexcoordExtendMode @ 0x180033E18 (ApplyTexcoordExtendMode.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     PopulateSamplerArguments @ 0x1800346EC (PopulateSamplerArguments.c)
 *     DecodeInputTexcoord @ 0x1800348A0 (DecodeInputTexcoord.c)
 *     ApplyTexcoordTransformations @ 0x180034940 (ApplyTexcoordTransformations.c)
 *     AppendColorModifications @ 0x1800349D8 (AppendColorModifications.c)
 *     AppendColorConversion @ 0x180034AAC (AppendColorConversion.c)
 *     PerformSample @ 0x180034BA4 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800F0F2C (AppendCustomSamplerShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x180036C4C (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180037000 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  __int16 v24; // [rsp+88h] [rbp+38h] BYREF

  v24 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v23 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v23);
  v11 = v10(v6, a3, a4, a5, &v23);
  v13 = v11;
  if ( v11 == -2147467259 )
  {
    v13 = -2005270526;
    goto LABEL_7;
  }
  if ( v11 < 0 )
  {
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0x6Eu, 0LL);
    goto LABEL_5;
  }
  v21 = *a6;
  v14 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v23, &v21);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x70u, 0LL);
  }
  else
  {
    v16 = (__int64 *)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
                       a1 + 16,
                       v22,
                       &v24);
    v17 = v23;
    v18 = *v16;
    v23 = 0LL;
    v19 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)&v21 = v19;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21);
    *(_WORD *)(v18 + 32) = 255;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v23);
  return v13;
}
