/*
 * XREFs of ?__clone@?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x18009E380
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008858C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  *((_OWORD *)v3 + 1) = *(_OWORD *)(v2 + 16);
  return result;
}
