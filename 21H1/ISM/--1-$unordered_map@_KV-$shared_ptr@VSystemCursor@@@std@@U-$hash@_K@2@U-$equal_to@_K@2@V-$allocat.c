/*
 * XREFs of ??1?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18013B6F4
 * Callers:
 *     _SystemCursorService::SystemCursorService_::_1_::dtor$2 @ 0x18013E842 (_SystemCursorService--SystemCursorService_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013ACBC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@s.c)
 */

void __fastcall std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::~unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
