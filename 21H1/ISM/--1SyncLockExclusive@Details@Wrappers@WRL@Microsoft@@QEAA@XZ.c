/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800CE904
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::dtor$1 @ 0x1800D202F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D202F.c)
 *     __lambda_44ac52284afab4209afe1ba1ddd42b4f_::operator()_::_1_::dtor$1 @ 0x1800D6703 (__lambda_44ac52284afab4209afe1ba1ddd42b4f_--operator()_--_1_--dtor$1.c)
 *     __lambda_88fb4871a400503c69c7f747a4c77519_::operator()_::_1_::dtor$0 @ 0x1800D6A87 (__lambda_88fb4871a400503c69c7f747a4c77519_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects_::_1_::dtor$1 @ 0x1800D8629 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--RemoveAllO_ea_1800D8629.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$1 @ 0x1800D8A4D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D8A4D.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo_::_1_::dtor$0 @ 0x1800D8CE0 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDevice--SetDynamicNodeInfo_--_1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded_::_1_::dtor$4 @ 0x1800E0B3F (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--OnHand_ea_1800E0B3F.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$3 @ 0x18015184B (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_18015184B.c)
 *     _Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback_::_1_::dtor$0 @ 0x18017001D (_Windows--Internal--SpatialInteractions--NodePropertyChangedHandler--UnregisterCallback_--_1_--d.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
