/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B1B4
 * Callers:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E30 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B1B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 *     ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x18012C6C8 (--1DisplayOcclusionContextMessage@@QEAA@XZ.c)
 *     _std::_Tree_std::_Tmap_traits_DockInputIdentity_DisplayOcclusionRect_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__DisplayOcclusionRect____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits_DockInputIdentity_DisplayOcclusionRect_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__DisplayOcclusionRect____0___::_Copy_tag__::_1_::catch$10 @ 0x18014663E (_std--_Tree_std--_Tmap_traits_DockInputIdentity_DisplayOcclusionRect_std--less_DockInputIdentity.c)
 *     ??1?$_Tree_node_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180146EB0 (--1-$_Tree_node_scoped_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOc.c)
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x180146EEC (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146F6C (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180147080 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18014764C (-clear@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B1B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
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
      std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0xD0);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
