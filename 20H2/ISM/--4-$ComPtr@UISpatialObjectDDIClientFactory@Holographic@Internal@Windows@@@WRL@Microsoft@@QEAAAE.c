/*
 * XREFs of ??4?$ComPtr@UISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x18007D1F4
 * Callers:
 *     ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x18007EF00 (-SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z.c)
 *     ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x18007EF40 (-SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z.c)
 *     ?SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x18007EF60 (-SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z.c)
 *     ?InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800D7918 (-InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions.c)
 *     ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800D8548 (-RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEA.c)
 *     ?PutOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x180116B60 (-PutOnComplete@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObjectDDIClientFactory>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v5);
  }
  return a1;
}
