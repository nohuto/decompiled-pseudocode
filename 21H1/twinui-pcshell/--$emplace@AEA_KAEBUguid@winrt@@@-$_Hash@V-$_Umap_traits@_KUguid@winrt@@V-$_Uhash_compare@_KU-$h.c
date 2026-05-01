/*
 * XREFs of ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x1800B2FEC
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1800B9288 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800B9588 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Insert@AEA_KAEBUguid@winrt@@@?$list@U?$pair@$$CB_KUguid@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEA_KAEBUguid@winrt@@@Z @ 0x1800B1950 (--$_Insert@AEA_KAEBUguid@winrt@@@-$list@U-$pair@$$CB_KUguid@winrt@@@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KUguid@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUguid@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@1@@Z @ 0x1800B21D0 (--$_Insert_unverified@U-$pair@$$CB_KUguid@winrt@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 ***v4; // rbx

  v4 = (__int64 ***)(a1 + 8);
  std::list<std::pair<unsigned __int64 const,winrt::guid>>::_Insert<unsigned __int64 &,winrt::guid const &>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,winrt::guid>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)**v4 + 16,
    **v4);
  return a2;
}
