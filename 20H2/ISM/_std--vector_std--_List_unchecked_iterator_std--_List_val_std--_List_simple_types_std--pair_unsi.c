/*
 * XREFs of _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo___________::_Reallocate_exactly_::_1_::catch$42 @ 0x1800453E7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18003FB4C (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 */

void __fastcall __noreturn std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo___________::_Reallocate_exactly_::_1_::catch_42(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::deallocate(
    a1,
    *(void **)(a2 + 64),
    *(_QWORD *)(a2 + 72));
  throw;
}
