/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18003FB7C
 * Callers:
 *     _std::vector_Microsoft::BamoImpl::RemoteCallBuffer___std::allocator_Microsoft::BamoImpl::RemoteCallBuffer_____::_Emplace_reallocate_Microsoft::BamoImpl::RemoteCallBuffer___const_&__::_1_::catch$33 @ 0x18003F038 (_std--vector_Microsoft--BamoImpl--RemoteCallBuffer___std--allocator_Microsoft--BamoImpl--RemoteC.c)
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo___________::_Reallocate_exactly_::_1_::catch$42 @ 0x180045A47 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_unsi.c)
 *     _std::vector_Microsoft::WRL::ComPtr_EdgyControllerClientProxy__std::allocator_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_____::_Emplace_reallocate_EdgyControllerClientProxy___&__::_1_::catch$32 @ 0x180049A8A (_std--vector_Microsoft--WRL--ComPtr_EdgyControllerClientProxy__std--allocator_Microsoft--WRL--Co.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
