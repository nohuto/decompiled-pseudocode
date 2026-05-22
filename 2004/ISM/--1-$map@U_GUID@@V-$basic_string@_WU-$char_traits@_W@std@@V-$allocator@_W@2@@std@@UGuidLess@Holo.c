/*
 * XREFs of ??1?$map@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800C547C
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot_::_1_::dtor$1 @ 0x1800C53EC (_Windows--Internal--Holographic--HolographicDeviceSnapshot--HolographicDeviceSnapsh_ea_1800C53EC.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot_::_1_::dtor$2 @ 0x1800C53FC (_Windows--Internal--Holographic--HolographicDeviceSnapshot--HolographicDeviceSnapsh_ea_1800C53FC.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x1800C4674 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$basic_string@_WU-$cha.c)
 */

void __fastcall std::map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>::~map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x50);
}
