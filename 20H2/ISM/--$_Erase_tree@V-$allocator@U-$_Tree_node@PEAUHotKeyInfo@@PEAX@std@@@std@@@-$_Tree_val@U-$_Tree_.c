/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x180129198
 * Callers:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x18009D348 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x180129198 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x18019EB1C (--0HotKeyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x180129198 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
