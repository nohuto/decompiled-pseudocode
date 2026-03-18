/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009B0EC
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18009F46C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18009D99C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  unsigned __int64 i; // rdi
  const unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  int v19; // r9d
  unsigned int v20[2]; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+20h] [rbp-48h]
  char v22; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *a3 > 0 )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( i >= *a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v9 = (const unsigned __int8 *)(a3[1] + 2 * i);
      v10 = a1[8] & std::_Fnv1a_append_bytes((unsigned __int64)a1, v9, 2uLL);
      while ( 1 )
      {
        v11 = (_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                          a1 + 2,
                          &v22,
                          v10);
        if ( v12 == *v11 )
          break;
        if ( *(_WORD *)(v12 + 16) == *(_WORD *)v9 )
          goto LABEL_7;
      }
      v12 = a1[3];
LABEL_7:
      if ( v12 == a1[3] )
        break;
      v13 = (__int64 *)a1[1];
      v14 = *(_QWORD *)(v12 + 24);
      v15 = (unsigned int)*(char *)(v12 + 32);
      v16 = *v13;
      if ( *(_BYTE *)(v12 + 33) )
      {
        v20[1] = HIDWORD(a2);
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v16 + 64))(v13, v14, v15);
        v3 = v17;
        if ( v17 < 0 )
        {
          v21 = 347;
LABEL_17:
          v19 = v17;
          goto LABEL_19;
        }
      }
      else
      {
        v20[0] = v4;
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v16 + 56))(
                v13,
                v14,
                v15,
                a2,
                *(unsigned int **)v20);
        v3 = v17;
        if ( v17 < 0 )
        {
          v21 = 340;
          goto LABEL_17;
        }
      }
      if ( (int)++v4 >= *a3 )
        return v3;
    }
    v3 = -2147024809;
    v19 = -2147024809;
    v21 = 332;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v19, v21, 0LL);
  }
  return v3;
}
