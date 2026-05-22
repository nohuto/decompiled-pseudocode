/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Move @ 0x180119660
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x18010F8C0 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 result; // rax

  *a2 = off_1801ABCA8;
  a2[1] = *(_QWORD *)(a1 + 8);
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    a2 + 2,
    (_QWORD *)(a1 + 16));
  result = v3;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
  return result;
}
