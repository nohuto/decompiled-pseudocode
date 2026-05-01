/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemContextMenuArgs___WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel__)__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x1802DA898
 * Callers:
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAVSwitchItemContextMenuArgs@1234@PE$AAUISwitcherViewModel@1234@@ZW4CallbackContext@Platform@@_N@Z @ 0x1802D49D8 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802CA9D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802E0B4C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void____cdecl_IXamlMultitaskingViewController::___WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemContextMenuArgs___WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel_____::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  __int64 v3; // rbx
  __int64 WeakReference; // rsi

  *a1 = &off_180599E80;
  v3 = __abi_winrt_cast_to(0, a2, (__int64)&_uuidof__AUIWeakReferenceSource_Details_Platform__);
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference(v3);
  a1[1] = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  a1[2] = IXamlMultitaskingViewController::GetContextMenu;
  return a1;
}
