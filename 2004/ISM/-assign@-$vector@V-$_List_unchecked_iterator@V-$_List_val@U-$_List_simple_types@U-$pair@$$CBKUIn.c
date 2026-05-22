/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800454A0
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180045274 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180047E58 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V-$_Uhash_compare@EU-.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004A034 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$h.c)
 * Callees:
 *     ??$_Fill_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@V12@@std@@YAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180044834 (--$_Fill_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$C.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180045100 (-_Clear_and_reserve_geometric@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 *i; // rbx

  v5 = *(_QWORD *)(a1 + 8);
  v7 = *(unsigned __int64 **)a1;
  v8 = (__int64)(v5 - (_QWORD)v7) >> 3;
  if ( a2 <= v8 )
  {
    i = &v7[a2];
    std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>>>(
      v7,
      (unsigned __int64)i,
      a3);
  }
  else
  {
    if ( a2 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 3 )
    {
      std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>>>(
        v7,
        v5,
        a3);
    }
    else
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Clear_and_reserve_geometric(
        (void **)a1,
        a2);
      v8 = 0LL;
    }
    v9 = a2 - v8;
    for ( i = *(unsigned __int64 **)(a1 + 8); v9; --v9 )
      *i++ = *a3;
  }
  *(_QWORD *)(a1 + 8) = i;
}
