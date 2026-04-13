/*
 * XREFs of ??_G?$COperationLambdaVar@$0A@V_lambda_353eed16ddc6ae5524b08f91443a76fa_@@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CFA9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_353eed16ddc6ae5524b08f91443a76fa_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 3,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
