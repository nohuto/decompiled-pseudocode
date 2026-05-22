/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18008A560
 * Callers:
 *     _MPCRawInputProvider::AttachDevice_::_1_::dtor$1 @ 0x18008A75F (_MPCRawInputProvider--AttachDevice_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::QueueInput_::_1_::dtor$0 @ 0x18008B05A (_MPCRawInputProvider--QueueInput_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDevice_::_1_::dtor$0 @ 0x18008B11B (_MPCRawInputProvider--RemoveDevice_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDeviceImpl_::_1_::dtor$0 @ 0x18008B2AF (_MPCRawInputProvider--RemoveDeviceImpl_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::AddHeadEventOccurred_::_1_::dtor$0 @ 0x18008D73A (_MPCHeadUpdateListener--AddHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x18008DA9F (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x18008DC5E (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x1800931A6 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x1800934D4 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x180094FE0 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent_::_1_::dtor$2 @ 0x180095177 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadUpdateEvent_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x180095BED (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     __lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator()_::_1_::dtor$0 @ 0x1800CEBEE (__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::dtor$0 @ 0x1800CEF21 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--AddDeviceToCa.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval_::_1_::dtor$2 @ 0x1800CF918 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800CF918.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800CFCB5 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnsureHmdNode.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::LockAndInvokeDisplayChanged_::_1_::dtor$0 @ 0x1800D06D6 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--LockAndInvoke.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$12 @ 0x1800D1574 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D1574.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800D209E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D209E.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$3 @ 0x1800D3AB4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D3AB4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$4 @ 0x1800D3AC0 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D3AC0.c)
 *     _std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D3C2B (_std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ptr_Windows.c)
 *     _std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800D3DFB (_std--_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std--shared_ptr_Windows.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016BD41 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--CreateNodePropertyC.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler_::_1_::dtor$0 @ 0x18016E8E9 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReleaseNodeProperty.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$0 @ 0x18016F158 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHapticsFeedback_.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown_::_1_::dtor$0 @ 0x18016F506 (_Windows--Internal--SpatialInteractions--HapticsEngine--Shutdown_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback_::_1_::dtor$0 @ 0x18016F6FC (_Windows--Internal--SpatialInteractions--HapticsEngine--StartFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback_::_1_::dtor$0 @ 0x18016F95E (_Windows--Internal--SpatialInteractions--HapticsEngine--StopFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$0 @ 0x18016FA25 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHapticsFeedback.c)
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
