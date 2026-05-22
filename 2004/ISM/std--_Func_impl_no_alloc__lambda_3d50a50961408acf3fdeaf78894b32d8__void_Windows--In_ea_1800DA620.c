/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy @ 0x1800DA620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801AB4A0;
  a2[1] = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 1);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
