/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_EdgyControllerClientProxy__std::allocator_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_____::_Emplace_reallocate_EdgyControllerClientProxy___&__::_1_::catch$32 @ 0x18004942A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18003FB4C (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 *     ?_Destroy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0@Z @ 0x1800492B0 (-_Destroy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_EdgyControllerClientProxy__std::allocator_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_____::_Emplace_reallocate_EdgyControllerClientProxy______::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
