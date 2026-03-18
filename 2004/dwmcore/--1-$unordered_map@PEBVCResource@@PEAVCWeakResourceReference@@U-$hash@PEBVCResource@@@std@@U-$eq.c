/*
 * XREFs of ??1?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x1800E24D0
 * Callers:
 *     _dynamic_atexit_destructor_for__CWeakResourceReference::s_weakReferenceMap__ @ 0x1800F3D00 (_dynamic_atexit_destructor_for__CWeakResourceReference--s_weakReferenceMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 */

void std::unordered_map<CResource const *,CWeakResourceReference *>::~unordered_map<CResource const *,CWeakResourceReference *>()
{
  _QWORD **v0; // rcx
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)&qword_180349428);
  v0 = (_QWORD **)qword_180349418;
  **(_QWORD **)(qword_180349418 + 8) = 0LL;
  v1 = *v0;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, 0x20uLL);
      v1 = v2;
    }
    while ( v2 );
  }
  std::_Deallocate<16,0>((void *)qword_180349418, 0x20uLL);
}
