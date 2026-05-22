/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x1800C4540
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x1800C4540 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C569C (--1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x1800C4540 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *>>>(
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
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    v7 = v6[8];
    if ( v7 >= 8 )
      std::_Deallocate<16,0>((void *)v6[5], (const struct std::nothrow_t *)(2 * v7 + 2));
    v6[7] = 0LL;
    v6[8] = 7LL;
    *((_WORD *)v6 + 20) = 0;
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x48);
  }
}
