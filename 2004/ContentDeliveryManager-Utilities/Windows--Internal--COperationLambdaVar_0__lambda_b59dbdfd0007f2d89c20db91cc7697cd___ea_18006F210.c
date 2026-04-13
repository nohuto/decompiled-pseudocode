/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_scalar_deleting_destructor_ @ 0x18006F210
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::__lambda_b59dbdfd0007f2d89c20db91cc7697cd_ @ 0x18006A340 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--__lambda_b59dbdfd0007f2d89c20db91cc7697cd_.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD9EC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 49,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  lambda_b59dbdfd0007f2d89c20db91cc7697cd_::__lambda_b59dbdfd0007f2d89c20db91cc7697cd_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
