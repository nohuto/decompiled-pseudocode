/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18026B32C
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x18009D9C8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXQEAU_D3D11_PARAMETER_DESC@@_K1@Z @ 0x18009F950 (-_Change_array@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // rdi
  char *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r8
  const void *v17; // rdx
  size_t v18; // r8

  v6 = ((__int64)a2 - *a1) / 56;
  v7 = (a1[1] - *a1) / 56;
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 56;
  v10 = v9 >> 1;
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 56 * v11;
  if ( v11 > 0x492492492492492LL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v15 = 56 * v6;
  *(_OWORD *)&v13[v15] = *(_OWORD *)a3;
  *(_OWORD *)&v13[v15 + 16] = *(_OWORD *)(a3 + 16);
  *(_OWORD *)&v13[v15 + 32] = *(_OWORD *)(a3 + 32);
  *(_QWORD *)&v13[v15 + 48] = *(_QWORD *)(a3 + 48);
  v16 = a1[1];
  v17 = (const void *)*a1;
  if ( a2 == (const void *)v16 )
  {
    v18 = v16 - (_QWORD)v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)a2 - *a1);
    v18 = a1[1] - (_QWORD)a2;
    v17 = a2;
    v14 = &v13[v15 + 56];
  }
  memmove_0(v14, v17, v18);
  std::vector<_D3D11_PARAMETER_DESC>::_Change_array(a1, (__int64)v13, v8, v11);
  return v15 + *a1;
}
