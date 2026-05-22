/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18008A1A0
 * Callers:
 *     _MPCRawInputProvider::AttachDevice_::_1_::dtor$1 @ 0x18008A39F (_MPCRawInputProvider--AttachDevice_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::QueueInput_::_1_::dtor$0 @ 0x18008AC9A (_MPCRawInputProvider--QueueInput_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDevice_::_1_::dtor$0 @ 0x18008AD5B (_MPCRawInputProvider--RemoveDevice_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDeviceImpl_::_1_::dtor$0 @ 0x18008AEEF (_MPCRawInputProvider--RemoveDeviceImpl_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::AddHeadEventOccurred_::_1_::dtor$0 @ 0x18008D37A (_MPCHeadUpdateListener--AddHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x18008D6DF (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x18008D89E (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x180092DE6 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x180093114 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x180094C20 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent_::_1_::dtor$2 @ 0x180094DB7 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadUpdateEvent_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x18009582D (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     __lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator()_::_1_::dtor$0 @ 0x1800CE81E (__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::dtor$0 @ 0x1800CEB51 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--AddDeviceToCa.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval_::_1_::dtor$2 @ 0x1800CF548 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800CF548.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800CF8E5 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnsureHmdNode.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::LockAndInvokeDisplayChanged_::_1_::dtor$0 @ 0x1800D0306 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--LockAndInvoke.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$12 @ 0x1800D11A4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D11A4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800D1CCE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D1CCE.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$3 @ 0x1800D36E4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D36E4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$4 @ 0x1800D36F0 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D36F0.c)
 *     _std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D385B (_std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ptr_Windows.c)
 *     _std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D3A2B (_std--_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std--shared_ptr_Windows.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016B921 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--CreateNodePropertyC.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016E4C9 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReleaseNodeProperty.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$0 @ 0x18016ED38 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHapticsFeedback_.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown_::_1_::dtor$0 @ 0x18016F0E6 (_Windows--Internal--SpatialInteractions--HapticsEngine--Shutdown_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback_::_1_::dtor$0 @ 0x18016F2DC (_Windows--Internal--SpatialInteractions--HapticsEngine--StartFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback_::_1_::dtor$0 @ 0x18016F53E (_Windows--Internal--SpatialInteractions--HapticsEngine--StopFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$0 @ 0x18016F605 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHapticsFeedback.c)
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
