/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180222768
 * Callers:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@Z @ 0x180222D78 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBI_N@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@CAXXZ @ 0x1800CF210 (-_Xlength@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@std@@.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _BYTE *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax

  v2 = a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::_Xlength();
  v4 = *a1;
  v5 = ((_BYTE *)a1[2] - v4) >> 3;
  v6 = v5 >> 1;
  if ( v5 <= 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * v5));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
           a1,
           v2);
}
