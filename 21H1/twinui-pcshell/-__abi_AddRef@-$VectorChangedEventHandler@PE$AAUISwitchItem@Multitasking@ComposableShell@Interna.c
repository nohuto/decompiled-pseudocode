/*
 * XREFs of ?__abi_AddRef@?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x1802D03F0
 * Callers:
 *     ?__abi_AddRef@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAKXZ @ 0x1800D3570 (-__abi_AddRef@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@WBA@E$AAAKXZ @ 0x1800D3580 (-__abi_AddRef@-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Interna.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::__abi_AddRef(
        __int64 a1)
{
  return __abi_FTMWeakRefData::Increment(a1 + 24);
}
