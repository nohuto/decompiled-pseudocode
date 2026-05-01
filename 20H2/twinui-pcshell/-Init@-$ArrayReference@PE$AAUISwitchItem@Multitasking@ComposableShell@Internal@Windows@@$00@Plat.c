/*
 * XREFs of ?Init@?$ArrayReference@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I_N@Z @ 0x18030206C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18030BA70 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18030BF0C (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18030BF0C.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18030C1D8 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18030C1D8.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18030C3E0 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItem@Multitasking@_ea_18030C3E0.c)
 * Callees:
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

void **__fastcall Platform::ArrayReference<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Init(
        _QWORD *a1,
        void *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  void **result; // rax

  v4 = a3;
  memset_0(a1, 0, 0x88uLL);
  *a1 = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  a1[1] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IValueType'};
  a1[2] = ___7__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_Platform__6B__I__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_1__;
  a1[3] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable'};
  a1[4] = ___7__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_Platform__6B__I__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_1__;
  a1[5] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  a1[6] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  a1[7] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  a1[8] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  a1[14] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  result = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[15] = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( a4 )
  {
    if ( (unsigned int)v4 > 0x1FFFFFFF )
    {
      __abi_WinRTraiseInvalidArgumentException();
      __debugbreak();
    }
    result = (void **)memset_0(a2, 0, 8 * v4);
  }
  if ( *((_DWORD *)a1 + 18) || a1[10] )
  {
    __abi_WinRTraiseFailureException();
    __debugbreak();
    JUMPOUT(0x180302176LL);
  }
  *((_DWORD *)a1 + 18) = v4;
  a1[10] = a2;
  *((_BYTE *)a1 + 76) = 1;
  return result;
}
