/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x18030D0FC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x1800FB880 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@-QIBindable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__UE_AAAJVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        struct Platform::Details::EventLock *a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  struct Platform::Details::EventLock *v4; // r8
  __int64 v5; // rdx

  v4 = a2;
  v5 = a1;
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    Platform::Details::EventSourceRemove((Platform::Details *)(a1 + 128), (void **)(v5 + 152), v4, a4);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
