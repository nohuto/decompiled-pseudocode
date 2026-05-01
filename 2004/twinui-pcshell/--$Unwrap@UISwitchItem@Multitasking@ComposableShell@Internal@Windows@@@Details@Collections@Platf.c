/*
 * XREFs of ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1802F8BDC
 * Callers:
 *     ??$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1802F8D08 (--$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Colle.c)
 *     ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1802F8DDC (--$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x180301C74 (-GetAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@_ea_180301C74.c)
 *     ?GetAt@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x180301D00 (-GetAt@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collect.c)
 *     ?get@?QCurrent@?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@3Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@5@XZ @ 0x18030E3B0 (-get@-QCurrent@-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Col.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Get@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@XZ @ 0x180301B20 (-Get@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEBA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>()
{
  __int64 v0; // rbx
  __int64 v1; // rdi

  v0 = Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Get();
  v1 = __abi_winrt_ptr_ctor(v0);
  if ( v0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  return v1;
}
