/*
 * XREFs of ??$_Insert@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800515A4
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180050EB8 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1802B6E3C (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1802BA5B0 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Insert<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v6; // r14
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  v8 = result;
  v9 = *a3;
  result[2] = *a3;
  if ( v9 )
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *v8 = a2;
  v8[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
