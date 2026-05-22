/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18008A100
 * Callers:
 *     _MPCRawInputProvider::AttachDevice_::_1_::dtor$1 @ 0x18008A2FF (_MPCRawInputProvider--AttachDevice_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::QueueInput_::_1_::dtor$0 @ 0x18008ABFA (_MPCRawInputProvider--QueueInput_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDevice_::_1_::dtor$0 @ 0x18008ACBB (_MPCRawInputProvider--RemoveDevice_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDeviceImpl_::_1_::dtor$0 @ 0x18008AE4F (_MPCRawInputProvider--RemoveDeviceImpl_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::AddHeadEventOccurred_::_1_::dtor$0 @ 0x18008D2DA (_MPCHeadUpdateListener--AddHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x18008D63F (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x18008D7FE (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x180092D46 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x180093074 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x180094B80 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent_::_1_::dtor$2 @ 0x180094D17 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadUpdateEvent_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x18009578D (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     __lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator()_::_1_::dtor$0 @ 0x1800CE78E (__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::dtor$0 @ 0x1800CEAC1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--AddDeviceToCa.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval_::_1_::dtor$2 @ 0x1800CF4B8 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800CF4B8.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800CF855 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnsureHmdNode.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::LockAndInvokeDisplayChanged_::_1_::dtor$0 @ 0x1800D0276 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--LockAndInvoke.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$12 @ 0x1800D1114 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D1114.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800D1C3E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D1C3E.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$3 @ 0x1800D3654 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D3654.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$4 @ 0x1800D3660 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D3660.c)
 *     _std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D37CB (_std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ptr_Windows.c)
 *     _std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D399B (_std--_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std--shared_ptr_Windows.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016B891 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--CreateNodePropertyC.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016E439 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReleaseNodeProperty.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$0 @ 0x18016ECA8 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHapticsFeedback_.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown_::_1_::dtor$0 @ 0x18016F056 (_Windows--Internal--SpatialInteractions--HapticsEngine--Shutdown_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback_::_1_::dtor$0 @ 0x18016F24C (_Windows--Internal--SpatialInteractions--HapticsEngine--StartFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback_::_1_::dtor$0 @ 0x18016F4AE (_Windows--Internal--SpatialInteractions--HapticsEngine--StopFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$0 @ 0x18016F575 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHapticsFeedback.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
