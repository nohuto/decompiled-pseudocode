/*
 * XREFs of ??B?$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@XZ @ 0x1800B4924
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180057E58 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008B1A0 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?terminate@winrt@@YAXXZ @ 0x1800D09B4 (-terminate@winrt@@YAXXZ.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368460 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803684B0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_base<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality,4>::operator enum Windows::UI::Internal::Text::Core::CoreKeyboardModality(
        unsigned int *a1)
{
  return *a1;
}
