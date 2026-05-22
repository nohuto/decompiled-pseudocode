/*
 * XREFs of ??1?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003B3E4
 * Callers:
 *     _dynamic_atexit_destructor_for__Win32kInterop::s_frameIdToPointerIdMap__ @ 0x1800518C0 (_dynamic_atexit_destructor_for__Win32kInterop--s_frameIdToPointerIdMap__.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800ACA04 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@.c)
 */

void std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map<unsigned int,std::vector<unsigned int>>()
{
  __int64 v0; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(&qword_180208B88);
  std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>>>(
    v0,
    qword_180208B78);
  std::_Deallocate<16,0>((void *)qword_180208B78, (const struct std::nothrow_t *)0x30);
}
