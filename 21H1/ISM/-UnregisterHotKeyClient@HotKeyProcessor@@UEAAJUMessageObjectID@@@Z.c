/*
 * XREFs of ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801A2290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180148F0C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A068C (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A1AD8 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::UnregisterHotKeyClient(HotKeyProcessor *a1, const struct MessageObjectID *a2)
{
  int RegisteredClient; // ebx
  ULONG_PTR v5; // rdi
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  struct HotkeyClientRegistration *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient(a1, a2, &v8);
  if ( RegisteredClient >= 0 )
  {
    RegisteredClient = HotKeyProcessor::RemoveClientRegistration(a1, v8);
    if ( RegisteredClient >= 0 )
      goto LABEL_8;
    v5 = 185LL;
  }
  else
  {
    v5 = 184LL;
  }
  if ( RegisteredClient == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v5);
  FailFastWithHR(RegisteredClient, retaddr, v5);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  return (unsigned int)RegisteredClient;
}
