/*
 * XREFs of ??1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800D5FEC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSourceOnInputThread_::_1_::dtor$0 @ 0x1800D87AF (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--RemoveSourceO.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF694 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::~DdiSource_InputThreadRemoval(
        SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
