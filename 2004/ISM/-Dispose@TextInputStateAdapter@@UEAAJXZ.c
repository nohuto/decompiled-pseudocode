/*
 * XREFs of ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x1801A2570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x18007F610 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1800BE7D8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall TextInputStateAdapter::Dispose(TextInputStateAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  HMODULE v3; // rcx

  *((_BYTE *)this + 48) = 0;
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v2 )
    MessageProxyReconnectAdapter::Dispose(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 3);
  v3 = (HMODULE)*((_QWORD *)this + 12);
  if ( v3 )
  {
    FreeLibrary(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  return 0LL;
}
