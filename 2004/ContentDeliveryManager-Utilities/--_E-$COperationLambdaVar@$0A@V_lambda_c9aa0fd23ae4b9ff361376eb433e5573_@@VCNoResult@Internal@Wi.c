/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_c9aa0fd23ae4b9ff361376eb433e5573_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18001CF90
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD9EC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_c9aa0fd23ae4b9ff361376eb433e5573_,Windows::Internal::CNoResult,>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  HSTRING v4; // rcx

  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v4 = (HSTRING)a1[1];
  if ( v4 )
    WindowsDeleteString(v4);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
