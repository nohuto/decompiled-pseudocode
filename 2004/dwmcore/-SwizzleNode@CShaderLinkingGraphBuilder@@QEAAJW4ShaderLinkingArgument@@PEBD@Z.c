/*
 * XREFs of ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800B3F04
 * Callers:
 *     AppendShaderBody @ 0x1800B52B8 (AppendShaderBody.c)
 *     DecodeInputTexcoord @ 0x1800B556C (DecodeInputTexcoord.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18002A23C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::SwizzleNode(unsigned __int64 a1, __int16 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // ebx
  __int16 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v5 = *(_QWORD *)(a1 + 64) & std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v11, 2uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           a1 + 16,
           &v12,
           v5);
    if ( v8 == *v6 )
      break;
    if ( *(_WORD *)(v8 + 16) == a2 )
      goto LABEL_4;
  }
  v8 = *(_QWORD *)(a1 + 24);
LABEL_4:
  if ( v8 == *(_QWORD *)(a1 + 24) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x9Du, 0LL);
  }
  else
  {
    strcpy_s((char *)(v8 + 33), 5uLL, "xy");
    return 0;
  }
  return v9;
}
