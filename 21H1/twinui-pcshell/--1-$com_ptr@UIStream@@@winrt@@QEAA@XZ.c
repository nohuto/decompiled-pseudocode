/*
 * XREFs of ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800B4AA8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$3 @ 0x1800B466D (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$3.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800C45A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::dtor$7 @ 0x1800C5F9A (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800C5F9A.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$15 @ 0x1800C85BC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800C85BC.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@winrt@@AEAAXXZ @ 0x1800BC9FC (-unconditional_release_ref@-$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@wi.c)
 */

__int64 __fastcall winrt::com_ptr<IStream>::~com_ptr<IStream>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::unconditional_release_ref();
  return result;
}
