/*
 * XREFs of std::_Func_impl_no_alloc__lambda_20739887fac96c8d37711a9156cbc9f0__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x18009EA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087E9C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_20739887fac96c8d37711a9156cbc9f0__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  v3 = a1 + 8;
  *a2 = off_18046F460;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  a2[2] = *(_QWORD *)(v3 + 8);
  return a2;
}
