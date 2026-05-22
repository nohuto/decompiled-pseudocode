/*
 * XREFs of ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180147020
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B154 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x180146298 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@@Z @ 0x180146324 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801464D8 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@U.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801475EC (-clear@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayOcclusionContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r9
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h]

  v3 = (__int64 *)(a1 + 88);
  if ( !*(_QWORD *)(a1 + 96) )
    return 2147943568LL;
  *(_OWORD *)v6 = 0LL;
  v6[0] = (__int64)std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>();
  if ( v6 != v3 )
  {
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::clear(v6);
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy_tag>(
      v6,
      v3,
      v7,
      v5);
  }
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::operator=<DisplayOcclusionContextMessage &,0>(
    a2,
    (__int64)v6);
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
    (__int64)v6,
    (__int64)v6,
    *(_QWORD *)(v6[0] + 8));
  std::_Deallocate<16,0>((void *)v6[0], (const struct std::nothrow_t *)0xD0);
  return 0LL;
}
