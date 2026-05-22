/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Copy @ 0x18019C590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal____::_Copy(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = off_1801AED70;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 8));
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 16));
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
  return a2;
}
