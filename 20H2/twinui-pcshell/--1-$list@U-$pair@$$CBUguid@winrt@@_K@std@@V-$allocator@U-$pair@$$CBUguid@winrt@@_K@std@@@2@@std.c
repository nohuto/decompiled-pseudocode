/*
 * XREFs of ??1?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAA@XZ @ 0x1800C93A4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::guid_unsigned___int64_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__unsigned___int64____0___::_Hash_std::_Umap_traits_winrt::guid_unsigned___int64_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__unsigned___int64____0____::_1_::dtor$0 @ 0x1800C85B0 (_std--_Hash_std--_Umap_traits_winrt--guid_unsigned___int64_std--_Uhash_compare_winr_ea_1800C85B0.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C6178 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@-.c)
 */

void __fastcall std::list<std::pair<winrt::guid const,unsigned __int64>>::~list<std::pair<winrt::guid const,unsigned __int64>>(
        void **a1)
{
  std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
