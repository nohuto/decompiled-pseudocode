/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x180458A10
 * Callers:
 *     ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1804598E0 (-GetActiveApps@UwpAppStateManager@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006869C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@CAXXZ @ 0x1800CD730 (-_Xlength@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@std@@.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801EC33C (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1801EE58C (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1801EE5C4 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

unsigned __int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  size_t v7; // rcx
  unsigned __int64 v8; // r9
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v4 = (unsigned __int64)a2 - *a1;
  v5 = (__int64)(a1[1] - *a1) >> 5;
  if ( v5 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::_Xlength();
  v17 = v5 + 1;
  v6 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v5 + 1);
  v7 = 32 * v6;
  if ( v6 > v8 )
    v7 = -1LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  v10 = v4 & 0xFFFFFFFFFFFFFFE0uLL;
  v11 = (__int64)v9 + v10;
  try
  {
    std::wstring::wstring(v11);
    v16 = (_QWORD *)((char *)v9 + v10);
    v12 = (_QWORD *)a1[1];
    v13 = (__int64)v9;
    v14 = (_QWORD *)*a1;
    if ( a2 != v12 )
    {
      std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(v14, a2, (__int64)v9);
      v16 = v9;
      v13 = v11 + 32;
      v12 = (_QWORD *)a1[1];
      v14 = a2;
    }
    std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(v14, v12, v13);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v16, (_QWORD *)((char *)v9 + v10 + 32));
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(32 * v6));
    throw;
  }
  std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v9, v17, v6);
  return v10 + *a1;
}
