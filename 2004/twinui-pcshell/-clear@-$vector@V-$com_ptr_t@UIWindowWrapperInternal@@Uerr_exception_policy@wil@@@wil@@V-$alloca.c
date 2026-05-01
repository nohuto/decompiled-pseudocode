/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1802BA874
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1802B7120 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1802BAEA0 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180058B94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::clear(__int64 *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
