/*
 * XREFs of ?BindableEventAdd@?QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAVBindableVectorChangedEventHandler@3456@@Z @ 0x1802DDDBC
 * Callers:
 *     ?BindableEventAdd@?QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCA@E$AAA?AVEventRegistrationToken@Foundation@6@PE$AAVBindableVectorChangedEventHandler@3456@@Z @ 0x1800D3ED0 (-BindableEventAdd@-QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows@@-$Vector@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _BindableEventAdd__QVectorChanged_IBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__EE_AAA_AVEventRegistrationToken_Foundation_6_PE_AAVBindableVectorChangedEventHandler_3456__Z(
        __int64 a1,
        _QWORD *a2)
{
  *(_BYTE *)(a1 + 112) = 1;
  *a2 = Platform::Details::EventSourceAdd(a1 + 128, a1 + 152);
  return a2;
}
