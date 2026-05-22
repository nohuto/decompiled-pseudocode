/*
 * XREFs of _lambda_7a85a72c47ab746898416b0dbf3b0d24_::operator() @ 0x1800AEC34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7a85a72c47ab746898416b0dbf3b0d24__void_IInputTarget___::_Do_call @ 0x1800B2F80 (std--_Func_impl_no_alloc__lambda_7a85a72c47ab746898416b0dbf3b0d24__void_IInputTarget___--_Do_cal.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180096D14 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE284 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7a85a72c47ab746898416b0dbf3b0d24_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE v6[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v7; // [rsp+38h] [rbp-40h]
  _BYTE v8[48]; // [rsp+48h] [rbp-30h] BYREF

  v4 = **(_QWORD **)a1;
  if ( *(_DWORD *)(v4 + 248) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 8), 0LL);
  }
  else
  {
    std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
      (__int64)v6,
      a2,
      v4);
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 16) + 8LL,
      **(_QWORD **)(a1 + 24),
      v6,
      a2);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)v8);
    std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
      v5,
      v7);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x18);
  }
}
