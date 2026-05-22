/*
 * XREFs of _std::vector_Microsoft::BamoImpl::RemoteCallBuffer___std::allocator_Microsoft::BamoImpl::RemoteCallBuffer_____::_Emplace_reallocate_Microsoft::BamoImpl::RemoteCallBuffer___const_&__::_1_::catch$33 @ 0x18003F038
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18003FB7C (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 */

void __fastcall __noreturn std::vector_Microsoft::BamoImpl::RemoteCallBuffer___std::allocator_Microsoft::BamoImpl::RemoteCallBuffer_____::_Emplace_reallocate_Microsoft::BamoImpl::RemoteCallBuffer___const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
