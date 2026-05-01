/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CCCFC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::Windows::Internal::Shell::implementation::WindowData_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____0___::_Insert_unverified_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__________::_1_::catch$48 @ 0x1800C4F4F (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--Windows--Internal--Shell--implementation--.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CE2CC (-erase@-$list@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>::erase(
           a1 + 8,
           &v3,
           a2);
}
