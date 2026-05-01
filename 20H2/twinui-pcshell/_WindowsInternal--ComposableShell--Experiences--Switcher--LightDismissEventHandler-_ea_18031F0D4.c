/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x18031F0D4
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x18031E2D0 (--$-0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@LightDismissEve.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180301DFC (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void____cdecl_IXamlSwitcherWindowInteractionEvents::___void___::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &off_1805C91E0;
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 144) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
