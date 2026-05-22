/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_int_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy______1___::_Insert_unverified_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____________::_1_::catch$56 @ 0x180132830
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180131258 (-erase@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_int_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy______1___::_Insert_unverified_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::erase(
    *(_QWORD *)(a2 + 64) + 8LL,
    (_QWORD *)(a2 + 64),
    *(void **)(a2 + 88));
  throw;
}
