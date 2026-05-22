/*
 * XREFs of ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801A28B4
 * Callers:
 *     ??_GTextInputStateAdapter@@EEAAPEAXI@Z @ 0x1801A2950 (--_GTextInputStateAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x18007F980 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TextInputStateAdapter::~TextInputStateAdapter(TextInputStateAdapter *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &TextInputStateAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &TextInputStateAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITextInputStateAdapter>'};
  *((_BYTE *)this + 56) = 0;
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  v2 = (HMODULE)*((_QWORD *)this + 13);
  if ( v2 )
  {
    FreeLibrary(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  *((_DWORD *)this + 5) = -1073741823;
}
