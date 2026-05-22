/*
 * XREFs of ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E80
 * Callers:
 *     ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180035680 (-RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180035710 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035AAC (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x18012C588 (--1-$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtu.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CEE0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x180145BA8 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180145D40 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x180146298 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146F0C (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180188D90 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BC388 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012B154 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 */

void __fastcall std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdx

  if ( *(char *)(a1 + 64) != -1 && *(_BYTE *)(a1 + 64) && *(_BYTE *)(a1 + 64) != 1 )
  {
    if ( *(_BYTE *)(a1 + 64) == 2 )
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
        a1,
        a1,
        *(_QWORD *)(*(_QWORD *)a1 + 8LL));
      v3 = *(void **)a1;
      v4 = 208LL;
    }
    else
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
      std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
        v2,
        *(_QWORD *)(a1 + 8));
      v3 = *(void **)(a1 + 8);
      v4 = 40LL;
    }
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)v4);
  }
}
