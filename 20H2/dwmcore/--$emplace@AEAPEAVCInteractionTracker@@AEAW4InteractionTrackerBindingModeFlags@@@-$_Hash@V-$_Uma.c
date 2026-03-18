/*
 * XREFs of ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CD26C
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CD98C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??$_Insert_unverified@AEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@@Z @ 0x1801CD13C (--$_Insert_unverified@AEAU-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@.c)
 *     ??$emplace_front@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$list@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@QEAAAEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CD3D0 (--$emplace_front@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$list@U-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::list<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>::emplace_front<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
    a1 + 8,
    a3,
    a4);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Insert_unverified<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>(
    (_QWORD *)a1,
    a2,
    (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(_QWORD **)(a1 + 8));
  return a2;
}
