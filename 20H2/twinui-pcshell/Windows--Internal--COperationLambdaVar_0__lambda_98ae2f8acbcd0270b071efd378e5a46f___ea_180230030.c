/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_scalar_deleting_destructor_ @ 0x180230030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008DE38 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  `eh vector destructor iterator'(
    (char *)a1 + 32,
    8LL,
    1LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
  *(_QWORD *)a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
