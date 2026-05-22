/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800F8160
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$7 @ 0x18004EB7E (_DWMInputRouter--DWMInputRouter_--_1_--dtor$7.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x18004EDD4 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x18004EEA4 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x1800F7FD4 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x1800F7FE7 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$2 @ 0x1800FD50A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$2.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x1800FD553 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$8 @ 0x1801744AF (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$8.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x18019AFA2 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180086DD4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
