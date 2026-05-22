/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2eb84c68d20ba77afb467c231113ec6c__void_IInputTarget___::_Do_call @ 0x1800B3240
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800970D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE644 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_2eb84c68d20ba77afb467c231113ec6c__void_IInputTarget___::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v6; // [rsp+38h] [rbp-40h]
  _BYTE v7[48]; // [rsp+48h] [rbp-30h] BYREF

  std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
    (__int64)v5,
    a2,
    a3);
  (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    **(_QWORD **)(a1 + 16),
    v5,
    **(_QWORD **)(a1 + 24));
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)v7);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v4,
    v6);
  std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x18);
}
