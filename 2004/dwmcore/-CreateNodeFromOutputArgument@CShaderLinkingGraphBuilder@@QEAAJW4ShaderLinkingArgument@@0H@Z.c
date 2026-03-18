/*
 * XREFs of ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001B8F4
 * Callers:
 *     AppendLights @ 0x18001B490 (AppendLights.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18002A23C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B659C (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800B6904 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(
        _QWORD *a1,
        __int16 a2,
        __int16 a3,
        char a4)
{
  unsigned __int64 v7; // r10
  __int64 *i; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF
  __int16 v15; // [rsp+68h] [rbp+10h] BYREF
  __int16 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v7 = a1[8] & std::_Fnv1a_append_bytes((unsigned __int64)a1, (const unsigned __int8 *const)&v16, 2uLL);
  for ( i = *(__int64 **)(a1[5] + 16 * v7);
        i != *(__int64 **)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                            a1 + 2,
                            &v14,
                            v7);
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == a3 )
      goto LABEL_4;
  }
  i = (__int64 *)a1[3];
LABEL_4:
  if ( i == (__int64 *)a1[3] )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x86u, 0LL);
  }
  else
  {
    std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
      a1 + 2,
      v13,
      &v15);
    v10 = v13[0];
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v13[0] + 24LL, i + 3);
    v11 = 0;
    *(_BYTE *)(v10 + 32) = a4;
    *(_BYTE *)(v10 + 33) = 0;
  }
  return v11;
}
