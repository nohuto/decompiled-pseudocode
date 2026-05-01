/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180309900
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FACA0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FACB0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@_ea_1800FACB0.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FACC0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@_ea_1800FACC0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__SwitchItemCollectionChangedEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.SwitchItemCollectionChangedEventArgs",
           0x52u,
           a2);
}
