/*
 * XREFs of ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x180146298
 * Callers:
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180147020 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E80 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@@Z @ 0x180146324 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801464D8 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@U.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801475EC (-clear@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::operator=<DisplayOcclusionContextMessage &,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // [rsp+40h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 64) == 2 )
  {
    if ( a1 != a2 )
    {
      std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::clear();
      LOBYTE(v4) = v9;
      std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy_tag>(
        a1,
        a2,
        v4);
    }
  }
  else
  {
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(a1);
    *(_BYTE *)(a1 + 64) = -1;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
                      v6,
                      v5);
    LOBYTE(v7) = v9;
    std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Copy_tag>(
      a1,
      a2,
      v7);
    *(_BYTE *)(a1 + 64) = 2;
  }
  return a1;
}
