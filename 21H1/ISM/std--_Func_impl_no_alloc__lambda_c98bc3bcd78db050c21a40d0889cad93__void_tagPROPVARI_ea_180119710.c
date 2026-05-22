/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const_&_::_Copy @ 0x180119710
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x18010FDAC (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const___::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801ACD78;
  a2[1] = *(_QWORD *)(a1 + 8);
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    a2 + 2,
    (_QWORD *)(a1 + 16));
  return a2;
}
