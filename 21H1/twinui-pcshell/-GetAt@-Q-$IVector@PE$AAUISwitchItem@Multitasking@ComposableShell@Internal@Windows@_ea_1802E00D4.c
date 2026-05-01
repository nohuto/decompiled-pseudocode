/*
 * XREFs of ?GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x1802E00D4
 * Callers:
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x1800D3FD0 (-GetAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections.c)
 *     ?BindableGetAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAVObject@8@I@Z @ 0x1802DDF54 (-BindableGetAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchIte_ea_1802DDF54.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1802EABE8 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_1802EABE8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1802D703C (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1802E6DC4 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetAt__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4_I_Z(
        Platform::Collections::Details *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi

  v2 = a2;
  v3 = (__int64)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) - **((_QWORD **)a1 + 12)) >> 5;
  LOBYTE(a1) = v2 < v3;
  Platform::Collections::Details::ValidateBounds(a1, v3);
  v4 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>();
  v5 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
