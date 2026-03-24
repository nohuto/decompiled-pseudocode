/*
 * XREFs of ??1?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800E6BF4
 * Callers:
 *     _dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__ @ 0x1800F9950 (_dynamic_atexit_destructor_for__CPointerDeviceCache--s_deviceCache__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x1800E66E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@-$_Tr.c)
 */

void std::map<void *,DEVICE_INFO>::~map<void *,DEVICE_INFO>()
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
    (__int64)&CPointerDeviceCache::s_deviceCache,
    (__int64)&CPointerDeviceCache::s_deviceCache,
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8));
  std::_Deallocate<16,0>((void *)CPointerDeviceCache::s_deviceCache, 0x60uLL);
}
