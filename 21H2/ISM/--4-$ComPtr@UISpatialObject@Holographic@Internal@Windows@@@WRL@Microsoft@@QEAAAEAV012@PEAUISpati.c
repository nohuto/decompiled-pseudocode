/*
 * XREFs of ??4?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObject@Holographic@Internal@Windows@@@Z @ 0x180075668
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800774F0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800B9100 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800DC720 (-RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windo.c)
 *     ?RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800E18C0 (-RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  }
  return a1;
}
