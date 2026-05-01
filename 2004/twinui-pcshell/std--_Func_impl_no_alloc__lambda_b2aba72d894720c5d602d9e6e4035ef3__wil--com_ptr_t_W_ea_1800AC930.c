/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1800AC930
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008858C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b2aba72d894720c5d602d9e6e4035ef3__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  v3 = a1 + 8;
  *a2 = off_1804943B8;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  a2[2] = *(_QWORD *)(v3 + 8);
  return a2;
}
