/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@1@PEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@1@@Z @ 0x1800C452C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@1@PEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@1@@Z @ 0x1800C452C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$TimestampedProperty@V-$basic_string@_WU-$char_trait.c)
 *     ??_G?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@QEAAPEAXI@Z @ 0x1800C590C (--_G-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHolographicDisp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@1@PEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@1@@Z @ 0x1800C452C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$TimestampedProperty@V-$basic_string@_WU-$char_trait.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v6; // rdi
  unsigned __int64 v7; // rdx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    v7 = v6[7];
    if ( v7 >= 8 )
      std::_Deallocate<16,0>((void *)v6[4], (const struct std::nothrow_t *)(2 * v7 + 2));
    v6[6] = 0LL;
    v6[7] = 7LL;
    *((_WORD *)v6 + 16) = 0;
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x48);
  }
}
