/*
 * XREFs of ??0?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@5@@Z @ 0x1802FA960
 * Callers:
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x1803019D4 (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_1803019D4.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180301A74 (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_180301A74.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802ED008 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

_QWORD *__fastcall Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
        _QWORD *a1,
        unsigned int **a2,
        _QWORD *a3)
{
  unsigned int *v6; // rax
  __int64 v7; // rax
  _QWORD *result; // rax

  Platform::Object::Object(a1 + 3);
  *a1 = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Windows::Foundation::Collections::IIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  a1[1] = ___7__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_Platform__6B__I__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PublicNonVirtuals_123__;
  a1[2] = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Windows::UI::Xaml::Interop::IBindableIterator'};
  a1[3] = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Platform::Object'};
  a1[4] = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[5] = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 11));
  a1[6] = 0LL;
  a1[7] = 0LL;
  v6 = a2[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  a1[6] = *a2;
  a1[7] = a2[1];
  a1[8] = 0LL;
  a1[9] = 0LL;
  v7 = a3[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  a1[8] = *a3;
  a1[9] = a3[1];
  result = a1;
  a1[10] = **a2;
  return result;
}
