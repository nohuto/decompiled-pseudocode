/*
 * XREFs of ??$emplace@AEBUguid@winrt@@AEA_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@AEA_K@Z @ 0x1800B3044
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800B9588 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Insert@AEBUguid@winrt@@AEA_K@?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUguid@winrt@@AEA_K@Z @ 0x1800B1AA4 (--$_Insert@AEBUguid@winrt@@AEA_K@-$list@U-$pair@$$CBUguid@winrt@@_K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBUguid@winrt@@_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUguid@winrt@@_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@@Z @ 0x1800B1E94 (--$_Insert_unverified@AEAU-$pair@$$CBUguid@winrt@@_K@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64 &>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _QWORD ****v4; // rbx

  v4 = (_QWORD ****)(a1 + 8);
  std::list<std::pair<winrt::guid const,unsigned __int64>>::_Insert<winrt::guid const &,unsigned __int64 &>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Insert_unverified<std::pair<winrt::guid const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>(
    a1,
    a2,
    **v4 + 2,
    **v4);
  return a2;
}
