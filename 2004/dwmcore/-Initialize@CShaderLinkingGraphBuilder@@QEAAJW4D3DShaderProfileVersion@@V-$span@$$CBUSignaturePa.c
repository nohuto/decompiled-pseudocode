/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B65F4
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800B4A94 (InitializeShaderLinkingInput.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180267E48 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Reallocate_exactly@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800B4D28 (-_Reallocate_exactly@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B659C (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@1@@Z @ 0x1800B6B58 (--$_Insert_unverified@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@st.c)
 *     ??$_Insert@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800B6CDC (--$_Insert@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$list@U-$p.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x1802688BC (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(
        struct ID3D11Linker **ppLinker,
        char a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 i; // rbx
  int v9; // ecx
  __int64 v10; // xmm0_8
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  HRESULT v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned int v16; // edi
  struct ID3D11Linker **v17; // rbx
  HRESULT v18; // eax
  __int64 v19; // rcx
  struct ID3D11Linker *v20; // rdi
  HRESULT (__stdcall *UseLibrary)(ID3D11Linker *, struct ID3D11ModuleInstance *); // rbx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // esi
  struct ID3D11Linker **v25; // rbx
  unsigned __int64 v26; // r15
  struct ID3D11Linker *v27; // rdx
  struct ID3D11LinkerVtbl *lpVtbl; // rdx
  struct ID3D11Linker *v29; // r9
  __int64 v31; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v32; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v33; // [rsp+48h] [rbp-91h]
  struct ID3D11Linker **v34; // [rsp+50h] [rbp-89h]
  __int128 v35; // [rsp+58h] [rbp-81h]
  __int128 v36; // [rsp+68h] [rbp-71h]
  _BYTE v37[24]; // [rsp+78h] [rbp-61h]
  _OWORD v38[3]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-19h]
  __int64 v40; // [rsp+C8h] [rbp-11h] BYREF
  char v41; // [rsp+D0h] [rbp-9h]
  int v42; // [rsp+D1h] [rbp-8h]
  __int16 v43; // [rsp+D5h] [rbp-4h]
  char v44; // [rsp+D7h] [rbp-2h]
  __int16 v45; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v46; // [rsp+E0h] [rbp+7h] BYREF
  char v47; // [rsp+E8h] [rbp+Fh]
  int v48; // [rsp+E9h] [rbp+10h]
  char v49; // [rsp+EDh] [rbp+14h]

  v3 = 0LL;
  *((_BYTE *)ppLinker + 84) = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( *a3 )
  {
    if ( *a3 > 0x492492492492492LL )
      std::_Xlength_error("vector<T> too long");
    std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly((__int64)&v32, *a3);
    v3 = v33;
  }
  v6 = a3[1];
  v7 = *((_QWORD *)&v32 + 1);
  for ( i = v6 + 32 * *a3; v6 != i; v6 += 32LL )
  {
    v9 = *(_DWORD *)(v6 + 28);
    v35 = *(_OWORD *)(v6 + 8);
    LODWORD(v36) = *(_DWORD *)(v6 + 24);
    DWORD2(v36) = 1;
    *(_OWORD *)&v37[8] = 0LL;
    HIDWORD(v36) = v9;
    *(_QWORD *)v37 = 0x100000000LL;
    DWORD1(v36) = v9 != 1;
    v10 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v37[8], *(__m128d *)&v37[8]);
    v39 = v10;
    v11 = v36;
    v12 = *(_OWORD *)v37;
    v38[1] = v36;
    v38[0] = v35;
    v38[2] = *(_OWORD *)v37;
    if ( v3 == v7 )
    {
      std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v32, v7, v38);
      v3 = v33;
      v7 = *((_QWORD *)&v32 + 1);
    }
    else
    {
      *(_OWORD *)v7 = v35;
      *(_OWORD *)(v7 + 16) = v11;
      *(_OWORD *)(v7 + 32) = v12;
      *(_QWORD *)(v7 + 48) = v10;
      v7 += 56LL;
      *((_QWORD *)&v32 + 1) = v7;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(ppLinker);
  v13 = D3DCreateLinker(ppLinker);
  v15 = v32;
  v16 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x44u, 0LL);
  }
  else
  {
    v17 = ppLinker + 1;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(ppLinker + 1);
    v18 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x45u, 0LL);
    }
    else
    {
      v20 = *v17;
      UseLibrary = (*v17)->lpVtbl->UseLibrary;
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v31);
      v22 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64, __int64, __int64 *))UseLibrary)(
              v20,
              v15,
              (v7 - v15) / 56,
              &v31);
      v16 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x49u, 0LL);
      }
      else
      {
        v24 = 0;
        if ( *(_DWORD *)a3 )
        {
          v25 = ppLinker + 2;
          v26 = a3[1];
          v34 = v25;
          do
          {
            v40 = 0LL;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v40, &v31);
            v41 = v24;
            if ( v24 >= *a3 )
            {
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            v46 = v40;
            v45 = *(_WORD *)(32LL * v24 + v26);
            if ( v40 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
            v27 = v25[1];
            v48 = v42;
            v47 = v24;
            lpVtbl = v27->lpVtbl;
            v49 = v43;
            std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Insert<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              v25 + 1,
              lpVtbl,
              &v45);
            v29 = v25[1];
            v25 = v34;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Insert_unverified<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>(
              v34,
              &v32,
              &v29->lpVtbl->Release);
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v46);
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v40);
            ++v24;
          }
          while ( v24 < *(_DWORD *)a3 );
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v31);
  if ( v15 )
    std::_Deallocate<16,0>(v15, 56 * ((v3 - v15) / 56));
  return v16;
}
