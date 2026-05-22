/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6a3155624c78cd50ce8884ce74998254__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Copy @ 0x1800DA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_6a3155624c78cd50ce8884ce74998254__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const___::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801AB3E0;
  a2[1] = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
