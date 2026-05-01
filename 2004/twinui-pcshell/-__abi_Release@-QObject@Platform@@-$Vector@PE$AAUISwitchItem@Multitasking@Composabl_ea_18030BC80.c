/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18030BC80
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x1800F9EB0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Intern.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x1800F9EC0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9EC0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x1800F9ED0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9ED0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x1800F9EE0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9EE0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x1800F9EF0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9EF0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x1800F9F00 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9F00.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x1800F9F10 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9F10.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEA@E$AAAKXZ @ 0x1800F9F20 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9F20.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEI@E$AAAKXZ @ 0x1800F9F30 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800F9F30.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802EDA68 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1802EEAF0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Release__QObject_Platform____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_2_UE_AAAKXZ(
        std::_Ref_count_base **a1)
{
  Platform::Details::ControlBlock **v2; // rsi
  void **v3; // rdx
  unsigned int v4; // edi
  void **v5; // rdx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  Platform::Details::ControlBlock *v8; // rbx

  v2 = a1 + 17;
  v4 = __abi_FTMWeakRefData::Decrement((int **)a1 + 17);
  if ( !v4 )
  {
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 16), v3);
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 15), v5);
    v6 = a1[13];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v7 = a1[11];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = *v2;
    Platform::Details::ControlBlock::ReleaseTarget(*v2);
    Platform::Details::ControlBlock::__abi_Release(v8);
  }
  return v4;
}
