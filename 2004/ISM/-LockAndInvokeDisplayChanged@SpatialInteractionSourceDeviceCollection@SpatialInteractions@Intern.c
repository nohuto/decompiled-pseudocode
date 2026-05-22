/*
 * XREFs of ?LockAndInvokeDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0234
 * Callers:
 *     ?Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAUIHolographicDisplay@785@@Z @ 0x1800D0150 (-Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0A1C (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::LockAndInvokeDisplayChanged(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a2,
        bool a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  lpCriticalSection = v6;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 51);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 50);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 53);
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged(
         this,
         (const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&lpCriticalSection,
         a2,
         a3);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
