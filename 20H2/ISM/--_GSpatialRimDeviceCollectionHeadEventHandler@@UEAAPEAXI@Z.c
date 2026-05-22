/*
 * XREFs of ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x180092850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialRimDeviceCollectionHeadEventHandler *__fastcall SpatialRimDeviceCollectionHeadEventHandler::`scalar deleting destructor'(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 23);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
