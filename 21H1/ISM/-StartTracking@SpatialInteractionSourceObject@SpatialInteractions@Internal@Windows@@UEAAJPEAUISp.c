/*
 * XREFs of ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D96D0
 * Callers:
 *     ?StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800DCE90 (-StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009F754 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800D6380 (_lambda_2610a4571c07b034f8353f9aca44fe5c_--operator().c)
 *     ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800D7644 (-EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking(
        HSTRING *a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v12; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v13[5]; // [rsp+48h] [rbp-29h] BYREF
  char v14; // [rsp+70h] [rbp-1h]
  __int128 v15; // [rsp+78h] [rbp+7h] BYREF
  int v16; // [rsp+88h] [rbp+17h]

  v12 = a4;
  v10 = 0;
  v11 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v13[0] = a1;
  v13[1] = &v11;
  v13[2] = &v10;
  v13[3] = &a5;
  v13[4] = &v15;
  v14 = 1;
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::EnsureDynamicNodeInfo(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *)a1,
         a3,
         (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v15);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int128 *, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(
           a2,
           a4,
           &v15,
           a5,
           &v11);
    v10 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::Wrappers::HString::Set(a1 + 12, &v12);
      v8 = 0;
    }
  }
  v14 = 0;
  lambda_2610a4571c07b034f8353f9aca44fe5c_::operator()(v13);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  return (unsigned int)v8;
}
