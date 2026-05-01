/*
 * XREFs of ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368460
 * Callers:
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x18035FAC0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ??B?$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@XZ @ 0x1800B4924 (--B-$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA-AW4CoreKey.c)
 *     ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x180368AAC (-IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  *(_DWORD *)a3 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown(this)
    && (unsigned int)std::_Atomic_base<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality,4>::operator enum Windows::UI::Internal::Text::Core::CoreKeyboardModality((unsigned int *)this + 129) != 512 )
  {
    *(_DWORD *)a3 = 2;
  }
  return 0LL;
}
