/*
 * XREFs of ?MoveNext@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAA_NXZ @ 0x1803047C0
 * Callers:
 *     ?MoveNext@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@WBA@E$AAA_NXZ @ 0x1800FA340 (-MoveNext@-Q-$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel.c)
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_MoveNext@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJPEA_N@Z @ 0x18030BB30 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@.c)
 * Callees:
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x180308074 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x180308100 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

bool __fastcall _MoveNext__Q__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_2Platform__UE_AAA_NXZ(
        __int64 a1)
{
  unsigned __int64 v2; // rdx
  Platform::Collections::Details *v3; // rcx

  Platform::Collections::Details::ValidateCounter(a1 + 48, *(unsigned int *)(a1 + 80));
  v2 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64)) >> 5;
  LOBYTE(v3) = *(unsigned int *)(a1 + 84) < v2;
  Platform::Collections::Details::ValidateBounds(v3, v2);
  return (unsigned int)++*(_DWORD *)(a1 + 84) < (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL)
                                                                           - **(_QWORD **)(a1 + 64)) >> 5);
}
