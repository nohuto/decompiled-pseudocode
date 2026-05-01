/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008C7BC
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180001B00 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x18019B528 (--0CustomShellManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006869C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@CAXXZ @ 0x1800CD730 (-_Xlength@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18019A740 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rdi
  size_t v7; // rdi
  _QWORD *v8; // rbx

  v4 = a2;
  v6 = (a3 - a2) >> 5;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::_Xlength();
    v7 = 4 * v6;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7 * 8);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = &v8[v7];
    while ( v4 != a3 )
    {
      std::wstring::wstring((__int64)v8);
      v8 += 4;
      v4 += 32LL;
    }
    std::_Destroy_range<std::allocator<std::wstring>>(v8, v8);
    a1[1] = v8;
  }
}
