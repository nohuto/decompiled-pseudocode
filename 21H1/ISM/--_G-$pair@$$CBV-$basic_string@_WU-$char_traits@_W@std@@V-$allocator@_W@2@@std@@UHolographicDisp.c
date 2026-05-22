/*
 * XREFs of ??_G?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@QEAAPEAXI@Z @ 0x1800C5DCC
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800C4BD8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D1A4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@std@@@1@PEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@1@@Z @ 0x1800C49EC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$TimestampedProperty@V-$basic_string@_WU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>::`scalar deleting destructor'(
        __int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  `eh vector destructor iterator'(
    (char *)(a1 + 216),
    456LL,
    2LL,
    (void (*)(void *))Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty);
  std::_Tree_val<std::_Tree_simple_types<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,void *>>>(
    a1 + 72,
    a1 + 72,
    *(__int64 **)(*(_QWORD *)(a1 + 72) + 8LL));
  std::_Deallocate<16,0>(*(void **)(a1 + 72), (const struct std::nothrow_t *)0x48);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a1 + 32), (const struct std::nothrow_t *)(2 * v2 + 2));
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v3 + 2));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  return a1;
}
