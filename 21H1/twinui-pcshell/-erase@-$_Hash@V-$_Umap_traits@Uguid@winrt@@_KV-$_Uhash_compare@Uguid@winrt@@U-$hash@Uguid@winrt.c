/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@0@Z @ 0x1800BB770
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800B90F4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Fill_unchecked@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXPEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x1800B1830 (--$_Fill_unchecked@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@st.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800B18B8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@-.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@@Z @ 0x1800BB81C (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$has_ea_1800BB81C.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD **v6; // rdx
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = (_QWORD **)a1[1];
  v7 = a3;
  if ( a3 == *v6 && a4 == v6 )
  {
    std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
      (__int64)a1,
      v6);
    *(_QWORD *)a1[1] = a1[1];
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    v9 = a1[4];
    v10 = (unsigned __int64 *)a1[3];
    v13 = a1[1];
    std::_Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>(
      v10,
      v9,
      &v13);
    *a2 = *(_QWORD *)a1[1];
  }
  else
  {
    while ( v7 != a4 )
    {
      v11 = v7;
      v7 = (_QWORD *)*v7;
      std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
        a1,
        &v13,
        v11);
    }
    *a2 = v7;
  }
  return a2;
}
