/*
 * XREFs of ??1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE5F0
 * Callers:
 *     __lambda_bf3e2a6d2db6a722ad52163451912338_::operator()_::_1_::dtor$0 @ 0x1800CEDBA (__lambda_bf3e2a6d2db6a722ad52163451912338_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF694 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::~DeviceRemoved(
        SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
