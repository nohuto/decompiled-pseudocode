/*
 * XREFs of ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CF55C
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D347C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800CC894 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollectio_ea_1800CC894.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CF904 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v12; // rcx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v13; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v16; // [rsp+58h] [rbp+28h] BYREF
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v16 = a2;
  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  if ( !*((_QWORD *)this + 41) )
  {
    v18 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
    if ( !*((_QWORD *)this + 51) )
    {
      v4 = -2147418113;
      v6 = 2147549183LL;
      v7 = 588LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 51))(
           *((_QWORD *)this + 51),
           &GUID_e464b452_7eb3_434b_95d6_1339477e80c7,
           &v18);
    v4 = v8;
    if ( v8 < 0 )
    {
      v6 = (unsigned int)v8;
      v7 = 589LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)v6);
      if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
      goto LABEL_22;
    }
    if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
    v17 = 0LL;
    v9 = v18;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **))(*(_QWORD *)v9 + 48LL))(
            v9,
            &v17);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 593LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
      return v4;
    }
    LOBYTE(v16) = 1;
    v13 = this;
    v14 = v17;
    v10 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
            (volatile int **)this + 39,
            &v14,
            &v13,
            (bool *)&v16);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 595LL;
      goto LABEL_21;
    }
    LOBYTE(v16) = 0;
    v14 = this;
    v13 = v17;
    v10 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
            (volatile int **)this + 40,
            &v13,
            &v14,
            (bool *)&v16);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 596LL;
      goto LABEL_21;
    }
    v10 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v17 + 120LL))(v17);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 598LL;
      goto LABEL_21;
    }
    v12 = v17;
    v17 = 0LL;
    v16 = (const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)*((_QWORD *)this + 41);
    *((_QWORD *)this + 41) = v12;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
  }
  return 0LL;
}
