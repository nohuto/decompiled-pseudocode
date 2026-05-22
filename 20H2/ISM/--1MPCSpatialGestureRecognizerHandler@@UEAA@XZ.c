/*
 * XREFs of ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x18007FF74
 * Callers:
 *     ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x180080000 (--_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180081F58 (-UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this)
{
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  MPCSpatialGestureRecognizerHandler::UnregisterSpatialEventHandlers(this);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 2);
}
