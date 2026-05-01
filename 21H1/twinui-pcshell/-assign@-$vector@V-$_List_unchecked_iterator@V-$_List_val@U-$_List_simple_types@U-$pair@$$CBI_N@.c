/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@Z @ 0x1802004C8
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801FFF50 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180335840 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180349C70 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180349D70 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@st.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180354CA0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UI.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1801FFEB8 (-_Clear_and_reserve_geometric@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801FFEB8.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,bool>>>>>::assign(
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
    if ( a2 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3 )
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
    else
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>::_Clear_and_reserve_geometric(
        (void **)a1,
        a2);
      v7 = 0LL;
    }
    v12 = a2 - v7;
    for ( i = *(unsigned __int64 **)(a1 + 8); v12; --v12 )
      *i++ = *a3;
  }
  *(_QWORD *)(a1 + 8) = i;
}
