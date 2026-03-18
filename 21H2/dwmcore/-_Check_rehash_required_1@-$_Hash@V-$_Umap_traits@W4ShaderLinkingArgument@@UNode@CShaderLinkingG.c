/*
 * XREFs of ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180035564
 * Callers:
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x180035334 (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x180036C4C (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_rehash_required_1(
        __int64 a1)
{
  __int64 v2; // rdx
  float v3; // xmm0_4
  __int64 v4; // rcx
  float v5; // xmm1_4

  v2 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v2 < 0 )
    v3 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
       + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
  else
    v3 = (float)(int)v2;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 < 0 )
    v5 = (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1))
       + (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1));
  else
    v5 = (float)(int)v4;
  return (float)(v3 / v5) > *(float *)a1;
}
