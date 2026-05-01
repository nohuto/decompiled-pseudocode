/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Delete_this @ 0x1800AE4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180061510 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Delete_this(
        char *a1,
        char a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 8));
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
}
