/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180003C24
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180003890 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Wind.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180003FF0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180068ED0 (-_Clear_and_reserve_geometric@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180068ED0.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 *i; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx

  v3 = *(unsigned __int64 **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 <= v7 )
  {
    v14 = 0LL;
    i = &v3[a2];
    v15 = a2 & 0x1FFFFFFFFFFFFFFFLL;
    if ( v3 > i )
      v15 = 0LL;
    if ( v15 )
    {
      if ( v15 >= 2 && (v3 > a3 || &v3[v15 - 1] < a3) )
      {
        v16 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v14 += 2LL;
        while ( v14 != v16 );
        v17 = 8 * v16;
        memset64(v3, *a3, v17 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v17);
      }
      while ( v14 != v15 )
      {
        ++v14;
        *v3++ = *a3;
      }
    }
  }
  else
  {
    if ( a2 > (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3 )
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>>>>::_Clear_and_reserve_geometric();
      v7 = 0LL;
    }
    else
    {
      v8 = 0LL;
      v9 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
        v9 = 0LL;
      if ( v9 )
      {
        if ( v9 >= 2 && (v3 > a3 || &v3[v9 - 1] < a3) )
        {
          v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v8 += 2LL;
          while ( v8 != v10 );
          v11 = 8 * v10;
          memset64(v3, *a3, v11 >> 3);
          v3 = (unsigned __int64 *)((char *)v3 + v11);
        }
        while ( v8 != v9 )
        {
          ++v8;
          *v3++ = *a3;
        }
      }
    }
    v12 = a2 - v7;
    for ( i = *(unsigned __int64 **)(a1 + 8); v12; --v12 )
      *i++ = *a3;
  }
  *(_QWORD *)(a1 + 8) = i;
}
