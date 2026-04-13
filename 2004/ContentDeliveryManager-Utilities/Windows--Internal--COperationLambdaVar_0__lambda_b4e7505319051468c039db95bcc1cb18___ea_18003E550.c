/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003E550
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_ @ 0x18002F170 (_lambda_b4e7505319051468c039db95bcc1cb18_--__lambda_b4e7505319051468c039db95bcc1cb18_.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD9EC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 15,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
