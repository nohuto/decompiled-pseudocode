/*
 * XREFs of ??_G?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@QEAAPEAXI@Z @ 0x1800C5E8C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800C4DF4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@_WU-$char_tra_ea_1800C4DF4.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1801551C4 (--$_Insert_nohint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca_ea_1801551C4.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18016734C (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@_ea_18016734C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>::`scalar deleting destructor'(
        __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a1 + 72), (const struct std::nothrow_t *)(2 * v1 + 2));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_WORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 7LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a1 + 32), (const struct std::nothrow_t *)(2 * v3 + 2));
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v4 + 2));
  *(_QWORD *)(a1 + 24) = 7LL;
  result = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
