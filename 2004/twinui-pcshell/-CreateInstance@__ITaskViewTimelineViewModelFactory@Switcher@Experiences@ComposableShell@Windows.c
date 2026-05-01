/*
 * XREFs of ?CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@2345@PE$AAVSwitchItemListViewModel@2345@PE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAVObject@Platform@@@Z @ 0x180300E58
 * Callers:
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@_NW4SwitchItemCloseButtonBehavior@1234@@Z @ 0x1802FB598 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIS.c)
 *     ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@PE$AAVVirtualDesktopBarElementViewModel@1234@PE$AAVObject@Platform@@@Z @ 0x1802FBAB0 (--0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@_ea_1802FBAB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelFactory::CreateInstance(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  return __abi_winrt_ptr_ctor(0LL);
}
