/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800ADD34
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800AE1B4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800B2EB0 (-_Check_size@-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B41B8 (-erase@-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBI.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::_Insert_unverified<std::pair<unsigned int const,std::vector<unsigned int>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,std::vector<unsigned int>>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rax
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 **v16; // r11
  __int64 **v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v8 = *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
          (__int64)&Win32kInterop::s_frameIdToPointerIdMap,
          &v20,
          qword_180209BC0 & appended);
  v10 = qword_180209BA8;
  while ( v8 != *(_QWORD *)(qword_180209BA8 + 16 * v9) )
  {
    v8 = *(_QWORD *)(v8 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v8 + 16) )
    {
      std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::erase(&qword_180209B98, &v20, a4);
      *(_QWORD *)a2 = v8;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v12 = *a4;
  if ( v8 != *a4 )
  {
    *(_QWORD *)a4[1] = v12;
    **(_QWORD **)(v12 + 8) = v8;
    **(_QWORD **)(v8 + 8) = a4;
    v13 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = a4[1];
    a4[1] = v13;
    v10 = qword_180209BA8;
  }
  v14 = 2 * v9;
  v15 = *(_QWORD *)(v10 + 16 * v9);
  if ( v15 == qword_180209B98 )
  {
    *(_QWORD *)(v10 + 16 * v9) = a4;
    *(_QWORD *)(qword_180209BA8 + 16 * v9 + 8) = a4;
  }
  else
  {
    v16 = (__int64 **)(v10 + 16 * v9);
    if ( v15 == v8 )
    {
      *v16 = a4;
    }
    else
    {
      v17 = (__int64 **)v16[1];
      v18 = *v17;
      v16[1] = *v17;
      if ( v18 != a4 )
      {
        v19 = *(_QWORD *)(qword_180209BA8 + 8 * v14 + 8);
        *(_QWORD *)(qword_180209BA8 + 8 * v14 + 8) = *(_QWORD *)(v19 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::erase(
      &Win32kInterop::s_frameIdToPointerIdMap,
      &v20,
      v21);
    throw;
  }
  return result;
}
