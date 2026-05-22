/*
 * XREFs of ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D6D40
 * Callers:
 *     ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800D6A74 (-AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800AECE0 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D47F0 (--$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows.c)
 *     ??$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4904 (--$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices(
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a1,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2,
        const wchar_t *a3,
        __int64 a4)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17[2]; // [rsp+30h] [rbp-39h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  int v20[2]; // [rsp+48h] [rbp-21h] BYREF
  int v21[2]; // [rsp+50h] [rbp-19h] BYREF
  const wchar_t *v22; // [rsp+58h] [rbp-11h] BYREF
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v23; // [rsp+60h] [rbp-9h] BYREF
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *v24[2]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v24[0] = a1;
  v23 = a2;
  v22 = a3;
  v24[1] = (struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *)a4;
  *(_QWORD *)v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *, __int64, const wchar_t *, GUID *, int *))(*(_QWORD *)a2 + 24LL))(
         a2,
         9LL,
         a3,
         &GUID_NULL,
         v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v5);
LABEL_3:
    v8 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      *(_QWORD *)v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)(a4 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return (unsigned int)v6;
  }
  if ( (*(int (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**(_QWORD **)v17 + 72LL))(
         *(_QWORD *)v17,
         &SPATIALPROP_HandTrackerObjectId,
         v25,
         16LL,
         0LL) >= 0 )
  {
    v19 = 0LL;
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64 *))(**(_QWORD **)v17 + 136LL))(*(_QWORD *)v17, v25, &v19);
    if ( v6 < 0 )
    {
      v11 = 205LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
      goto LABEL_3;
    }
    *(_QWORD *)v20 = v19;
    *(_QWORD *)v21 = *(_QWORD *)v17;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal * &,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory * &,wchar_t const * &,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
           &v18,
           v24,
           &v23,
           &v22,
           (struct Windows::Internal::Holographic::ISpatialObjectDevice **)v21,
           (struct Windows::Internal::Holographic::ISpatialObject **)v20);
    if ( v6 < 0 )
    {
      v11 = 212LL;
      goto LABEL_11;
    }
    v12 = std::_Func_class<void,IInputTarget *>::operator()(a4, (__int64)v18);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        213LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  }
  if ( (*(int (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**(_QWORD **)v17 + 72LL))(
         *(_QWORD *)v17,
         &SPATIALPROP_EyeTrackerObjectId,
         v26,
         16LL,
         0LL) >= 0 )
  {
    v19 = 0LL;
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64 *))(**(_QWORD **)v17 + 136LL))(*(_QWORD *)v17, v26, &v19);
    if ( v6 < 0 )
    {
      v11 = 223LL;
      goto LABEL_11;
    }
    *(_QWORD *)v21 = v19;
    *(_QWORD *)v20 = *(_QWORD *)v17;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice,Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal * &,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory * &,wchar_t const * &,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
           &v18,
           v24,
           &v23,
           &v22,
           (struct Windows::Internal::Holographic::ISpatialObjectDevice **)v20,
           (struct Windows::Internal::Holographic::ISpatialObject **)v21);
    if ( v6 < 0 )
    {
      v11 = 230LL;
      goto LABEL_11;
    }
    v14 = std::_Func_class<void,IInputTarget *>::operator()(a4, (__int64)v18);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        231LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  }
  v15 = *(_QWORD *)v17;
  if ( *(_QWORD *)v17 )
  {
    *(_QWORD *)v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *(_QWORD *)(a4 + 56);
  if ( v16 )
  {
    LOBYTE(v13) = v16 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v13);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0LL;
}
