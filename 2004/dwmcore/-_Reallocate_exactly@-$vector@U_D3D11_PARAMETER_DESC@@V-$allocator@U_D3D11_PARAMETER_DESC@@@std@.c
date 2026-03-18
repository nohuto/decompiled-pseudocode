/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800B4D28
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B65F4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  SIZE_T v5; // rcx
  __int64 v6; // rdi
  void *v7; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = 56 * a2;
  v6 = v3 / 56;
  if ( a2 > 0x492492492492492LL )
    v5 = -1LL;
  v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<_D3D11_PARAMETER_DESC>::_Change_array(a1, v7, v6, a2);
}
