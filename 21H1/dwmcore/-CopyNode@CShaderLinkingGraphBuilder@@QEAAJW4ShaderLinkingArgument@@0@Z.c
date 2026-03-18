/*
 * XREFs of ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18009EB20
 * Callers:
 *     PerformSample @ 0x18009E0CC (PerformSample.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18026A8B8 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x18009D5C4 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18009D99C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009DCD8 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(unsigned __int64 a1, __int16 a2, __int16 a3)
{
  unsigned __int64 appended; // rax
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rbx
  _BYTE *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // ebx
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int16 v20; // [rsp+68h] [rbp+10h] BYREF
  __int16 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = a3;
  v20 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v21, 2uLL);
  v7 = *(_QWORD *)(v6 + 48) & appended;
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           v6,
           &v19,
           v7);
    if ( v10 == *v8 )
      break;
    if ( *(_WORD *)(v10 + 16) == a3 )
      goto LABEL_4;
  }
  v10 = *(_QWORD *)(v6 + 8);
LABEL_4:
  if ( v10 == *(_QWORD *)(a1 + 24) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0xB5u, 0LL);
  }
  else
  {
    v11 = v10 + 24;
    std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
      v6,
      (__int64)v18,
      (const unsigned __int8 *)&v20);
    v12 = v18[0] + 24LL;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=((__int64 *)(v18[0] + 24LL), (_QWORD *)v11);
    v13 = (_BYTE *)(v12 + 9);
    *(_BYTE *)(v12 + 8) = *(_BYTE *)(v11 + 8);
    v14 = v11 - v12;
    v15 = 5LL;
    do
    {
      *v13 = v13[v14];
      ++v13;
      --v15;
    }
    while ( v15 );
    return 0;
  }
  return v16;
}
