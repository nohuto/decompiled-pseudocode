/*
 * XREFs of _lambda_bdc3f85b4bc9e929848d1767baf75ca3_::operator() @ 0x180274950
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3___::Run @ 0x180276760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3___--Run.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A9AC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_bdc3f85b4bc9e929848d1767baf75ca3_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  struct IApplicationView *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *Ptr; // rbx
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 WindowForView; // r10
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1 + 22;
  AcquireSRWLockShared(v2);
  if ( (*a1)[10].Ptr )
  {
    Ptr = (__int64 *)(*a1)[23].Ptr;
    v7 = *Ptr;
    v10 = *Ptr;
    while ( (__int64 *)v7 != Ptr )
    {
      v8 = *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(v7 + 32);
      if ( v8 != (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a1[2] )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(v8, v3);
        if ( WindowForView )
          (*(void (__fastcall **)(PVOID, _QWORD, __int64, __int64))(*(_QWORD *)(*a1)[10].Ptr + 56LL))(
            (*a1)[10].Ptr,
            LODWORD((*a1)[16].Ptr),
            WindowForView,
            2LL);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v10,
        (__int64)v3,
        v4,
        v5);
      v7 = v10;
    }
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
