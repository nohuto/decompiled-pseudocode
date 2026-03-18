/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420
 * Callers:
 *     AppendLights @ 0x18001C0B0 (AppendLights.c)
 *     LinkLightShader @ 0x18001C2C4 (LinkLightShader.c)
 *     PerformSample @ 0x18009E0CC (PerformSample.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     PopulateSamplerArguments @ 0x18009EBF4 (PopulateSamplerArguments.c)
 *     DecodeInputTexcoord @ 0x18009ED98 (DecodeInputTexcoord.c)
 *     AppendColorConversion @ 0x18009EE3C (AppendColorConversion.c)
 *     ApplyTexcoordTransformations @ 0x18009EE98 (ApplyTexcoordTransformations.c)
 *     ApplyTexcoordExtendMode @ 0x18009EF38 (ApplyTexcoordExtendMode.c)
 *     AppendShaderBody @ 0x18009F064 (AppendShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18026A8B8 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009B0EC (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x18009D5C4 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        _QWORD *a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int16 v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = a2;
  v6 = a1[1];
  v19 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v19);
  v12 = v10(v6, a3, a4, a5, &v19);
  if ( v12 == -2147467259 )
    v12 = -2005270526;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x6Du, 0LL);
  }
  else
  {
    v18 = *a6;
    v13 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v19, (__int64 *)&v18);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6Fu, 0LL);
    }
    else
    {
      std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
        a1 + 2,
        &v18,
        &v20);
      v15 = v18;
      v16 = v19;
      v19 = 0LL;
      *(_QWORD *)&v18 = *(_QWORD *)(v18 + 24);
      *(_QWORD *)(v15 + 24) = v16;
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v18);
      *(_WORD *)(v15 + 32) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v19);
  return (unsigned int)v12;
}
