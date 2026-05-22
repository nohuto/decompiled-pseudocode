/*
 * XREFs of ??_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D6700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800D5B84 (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 25);
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
