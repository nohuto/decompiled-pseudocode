/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CF970
 * Callers:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800C7AA0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KUWindowData@implemen.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@0@Z @ 0x1800CF8C4 (-erase@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uh.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CFDAC (-erase@-$list@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 8uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  std::list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>::erase(
    a1 + 1,
    a2,
    v6);
  return a2;
}
