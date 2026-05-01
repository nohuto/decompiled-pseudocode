/*
 * XREFs of ??$cx_safe_cast@VShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAVShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x1803240AC
 * Callers:
 *     ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180326484 (-TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EC570 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ShellTab,IInspectable *>(__int64 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64, __int64 *); // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(*a1);
  v2 = __abi_winrt_cast_to(0, v1, (__int64)&_uuidof__AVShellTab_Tabs_ComposableShell_Internal_Windows__);
  v3 = __abi_winrt_ptr_ctor(v2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v1)[2])(v1);
  return v3;
}
