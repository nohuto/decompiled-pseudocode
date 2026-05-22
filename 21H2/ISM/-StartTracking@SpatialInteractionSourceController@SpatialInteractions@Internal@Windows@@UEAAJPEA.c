/*
 * XREFs of ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18016F710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009F654 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ @ 0x1800D05D4 (-KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ.c)
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x18016A2C4 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016C0EC (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StartTracking(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-3Dh] BYREF
  int v14[2]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v15; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v16[6]; // [rsp+48h] [rbp-29h] BYREF
  char v17; // [rsp+78h] [rbp+7h]
  __int128 v18; // [rsp+80h] [rbp+Fh] BYREF
  int v19; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v15 = a4;
  v12 = 0;
  ThreadpoolTimerHelpers::KeepAliveTimer::KeepAlive((ThreadpoolTimerHelpers::KeepAliveTimer *)(a1 + 576));
  if ( !*(_BYTE *)(a1 + 456) )
  {
    v13 = 0;
    *(_QWORD *)v14 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v16[0] = a1;
    v16[1] = v14;
    v16[2] = &v12;
    v16[3] = &a5;
    v16[4] = &v13;
    v16[5] = &v18;
    v17 = 1;
    v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
           (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)a1,
           a3,
           (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v18,
           &v13);
    v12 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v14);
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int128 *, _QWORD, int *))(*(_QWORD *)a2 + 32LL))(
              a2,
              a4,
              &v18,
              a5,
              v14);
      v9 = v10;
      v12 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 96), &v15);
        v17 = 0;
        lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()((__int64)v16);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v14);
        return v12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v10);
    }
    v17 = 0;
    lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()((__int64)v16);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v14);
    return (unsigned int)v9;
  }
  *(_BYTE *)(a1 + 457) = 1;
  return v12;
}
