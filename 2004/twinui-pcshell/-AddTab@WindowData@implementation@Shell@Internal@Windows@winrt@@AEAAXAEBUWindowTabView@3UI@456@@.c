/*
 * XREFs of ?AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x1800D134C
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800D1F98 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUguid@3@XZ @ 0x1800CA8F8 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ??$_Insert@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@?$list@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAUguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@4@@Z @ 0x1800D0464 (--$_Insert@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@-$list@U-$pair@$$CBUguid@.c)
 *     ??$_Insert_unverified@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@1@@Z @ 0x1800D0870 (--$_Insert_unverified@U-$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@.c)
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x1800D13F8 (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabVie.c)
 *     ?push_front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z @ 0x1800D2F44 (-push_front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::AddTab(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
         a2,
         (__int64)v7);
  std::deque<winrt::guid>::push_front((char *)this + 152, v4);
  v5 = (_OWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
                   a2,
                   (__int64)v7);
  std::list<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>::_Insert<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView const &>(
    (__int64)this + 96,
    **((_QWORD **)this + 12),
    v5,
    a2);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Insert_unverified<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>>>>(
    (__int64)this + 88,
    (__int64)v6,
    (_QWORD *)(**((_QWORD **)this + 12) + 16LL),
    **((_QWORD **)this + 12));
  winrt::Windows::Internal::Shell::implementation::WindowData::AddTabProxyWindow(this, a2);
}
