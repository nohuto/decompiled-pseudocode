/*
 * XREFs of ??1NarratorProxy@@QEAA@XZ @ 0x1800AE828
 * Callers:
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$2 @ 0x18005045E (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall NarratorProxy::~NarratorProxy(NarratorProxy *this)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this);
}
