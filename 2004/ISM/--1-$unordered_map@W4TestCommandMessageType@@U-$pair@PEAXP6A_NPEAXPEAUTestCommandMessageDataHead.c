/*
 * XREFs of ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800BC1C0
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$2 @ 0x18004E45A (_TestCommandHost--TestCommandHost_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801457FE (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801459CA (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$7 @ 0x18017452F (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$7.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BBFC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::~unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
