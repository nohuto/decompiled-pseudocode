/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@0@Z @ 0x1800D2B14
 * Callers:
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800D1C50 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ??$_Fill_unchecked@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXPEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x1800C4610 (--$_Fill_unchecked@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@st.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D0318 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@In.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@@Z @ 0x1800D2BC0 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Window_ea_1800D2BC0.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = (_QWORD *)a1[1];
  v7 = a3;
  if ( a3 == (_QWORD *)*v6 && a4 == v6 )
  {
    std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
      (__int64)a1,
      (__int64)v6);
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
      std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::erase(
        a1,
        &v13,
        v11);
    }
    *a2 = v7;
  }
  return a2;
}
