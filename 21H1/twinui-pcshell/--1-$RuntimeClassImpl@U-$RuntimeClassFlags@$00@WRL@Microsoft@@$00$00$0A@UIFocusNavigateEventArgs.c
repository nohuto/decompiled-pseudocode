/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180155A6C
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180156340 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIFocusNavigateEventArgs@Experience@S.c)
 *     ??_GVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1801564B0 (--_GVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z.c)
 *     _SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::_scalar_deleting_destructor_ @ 0x180193EA0 (_SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CFocusNavigateEventArgs--_scalar.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x1801AC97C (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     ??_ESnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180218DA0 (--_ESnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ @ 0x180268398 (--1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ.c)
 *     ??_GAppViewIconFactory@@UEAAPEAXI@Z @ 0x18031A0A0 (--_GAppViewIconFactory@@UEAAPEAXI@Z.c)
 *     ??_E?$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180320D80 (--_E-$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V-$Vec.c)
 *     ??_G?$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180339FB0 (--_G-$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$Vector@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
             2 * v2,
             a2);
  return result;
}
