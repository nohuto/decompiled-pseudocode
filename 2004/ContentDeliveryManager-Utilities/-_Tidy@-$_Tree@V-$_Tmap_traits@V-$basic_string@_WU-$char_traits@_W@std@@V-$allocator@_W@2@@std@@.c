/*
 * XREFs of ?_Tidy@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180079AE8
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::CommonHelper::Details::less_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer______0___::_Tree_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::CommonHelper::Details::less_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer______0____::_1_::catch$3 @ 0x1800D7FAC (_std--_Tree_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800D7FAC.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x180040264 (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x18007A18C (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_18007A18C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tidy(
        _QWORD *a1)
{
  __int64 v1; // rax
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  __int64 result; // rax

  v1 = *a1;
  v3 = *(_BYTE **)(*a1 + 8LL);
  v4 = v3;
  if ( !v3[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
        a1,
        *((_QWORD *)v4 + 2));
      v4 = *(_BYTE **)v4;
      std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>((__int64)(v3 + 32));
      operator delete(v3);
      v3 = v4;
    }
    while ( !v4[25] );
    v1 = *a1;
  }
  *(_QWORD *)(v1 + 8) = v1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
