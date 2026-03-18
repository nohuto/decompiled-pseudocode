/*
 * XREFs of ??$_Insert@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800B6CDC
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B65F4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char __fastcall std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Insert<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r9
  __int64 v10; // r8
  char result; // al

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v8 = (_QWORD *)(a3 + 8);
  v9 = (_QWORD *)v7;
  v10 = v7 + 24;
  *(_WORD *)(v7 + 16) = *(_WORD *)a3;
  *(_QWORD *)(v7 + 24) = 0LL;
  if ( v7 + 24 != a3 + 8 )
  {
    *(_QWORD *)v10 = *v8;
    *v8 = 0LL;
  }
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a3 + 16);
  *(_DWORD *)(v7 + 33) = *(_DWORD *)(a3 + 17);
  result = *(_BYTE *)(a3 + 21);
  *(_BYTE *)(v10 + 13) = result;
  *v9 = a2;
  v9[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v6 = v9;
  return result;
}
