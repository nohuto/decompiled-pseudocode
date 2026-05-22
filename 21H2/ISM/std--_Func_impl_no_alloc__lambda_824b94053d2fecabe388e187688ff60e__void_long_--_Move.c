/*
 * XREFs of std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Move @ 0x180119A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x18010FCCC (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9

  *a2 = off_1801ACCB8;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    a2 + 1,
    (_QWORD *)(a1 + 8));
  return v2;
}
