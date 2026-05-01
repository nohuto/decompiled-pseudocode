/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802B17D0
 * Callers:
 *     _WindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$2 @ 0x1802B4CD7 (_WindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18004ADDC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>(
        __int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
