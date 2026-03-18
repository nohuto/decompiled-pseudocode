/*
 * XREFs of ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180031F14
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x18004A648 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Find_last@PEBVCResource@@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@AEBQEBVCResource@@_K@Z @ 0x180032080 (--$_Find_last@PEBVCResource@@@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800320E4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180032148 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_com.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180032A10 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  unsigned __int64 i; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
    i,
    &v19,
    a3,
    v5);
  if ( *((_QWORD *)&v19 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v19 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1803D37C0 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v10 = *a3;
    v11 = v9;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 16) = v10;
    v12 = qword_1803D37C0 + 1;
    if ( qword_1803D37C0 + 1 < 0 )
      v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *((_QWORD *)&xmmword_1803D37E0 + 1);
    if ( xmmword_1803D37E0 < 0 )
    {
      v14 = BYTE8(xmmword_1803D37E0) & 1;
      v15 = (float)(int)(v14 | (*((_QWORD *)&xmmword_1803D37E0 + 1) >> 1))
          + (float)(int)(v14 | (*((_QWORD *)&xmmword_1803D37E0 + 1) >> 1));
    }
    else
    {
      v15 = (float)SDWORD2(xmmword_1803D37E0);
    }
    if ( (float)(v13 / v15) > *(float *)&CWeakResourceReference::s_weakReferenceMap )
    {
      v16 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Desired_grow_bucket_count();
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Forced_rehash(
        v17,
        v16);
      v19 = *(_OWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
                         v18,
                         &v19,
                         v11 + 16,
                         v5);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert_new_node_before(
                      v14,
                      v5,
                      v19,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
