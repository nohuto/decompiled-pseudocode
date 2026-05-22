/*
 * XREFs of ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18016E4DC
 * Callers:
 *     ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x18016B880 (-CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Interna.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18016E478 (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterCallback@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x18016FAC0 (-UnregisterCallback@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  __int64 *v2; // rbx
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *v3; // rcx

  v2 = (__int64 *)((char *)this + 736);
  v3 = (Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *)*((_QWORD *)this + 92);
  if ( v3 )
  {
    Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback(v3);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  }
}
