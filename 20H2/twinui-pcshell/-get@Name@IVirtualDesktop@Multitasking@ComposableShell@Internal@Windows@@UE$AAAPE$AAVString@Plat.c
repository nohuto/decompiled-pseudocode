/*
 * XREFs of ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x18031DB88
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x180319028 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x18008E3E2 (WindowsDeleteString_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1802EBD18 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  HSTRING *v3; // r8
  HSTRING v4; // rbx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL))(a1, &string);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v4 = __abi_winrt_ptrto_string_ctor((Platform::Details *)string, v2, v3);
  WindowsDeleteString_0(string);
  return v4;
}
