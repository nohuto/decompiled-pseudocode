/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800AE5EC
 * Callers:
 *     _InputContext::InputContext_::_1_::dtor$2 @ 0x18004E948 (_InputContext--InputContext_--_1_--dtor$2.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$3 @ 0x18004F840 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$3.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$14 @ 0x180149FAB (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_180149FAB.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$15 @ 0x180149FBB (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_180149FBB.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$2 @ 0x18014A725 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___ContextualProces_ea_18014A725.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$3 @ 0x18014A735 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___ContextualProces_ea_18014A735.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$1 @ 0x18014B77F (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$1.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$6 @ 0x18014B7BB (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$13 @ 0x18014B803 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$13.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$18 @ 0x18014B833 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$18.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$19 @ 0x18014B83F (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$19.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$99 @ 0x18014B863 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$99.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$100 @ 0x18014B873 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$100.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC9B4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 */

void __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
