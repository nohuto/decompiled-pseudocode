/*
 * XREFs of ??1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800D5B00
 * Callers:
 *     __lambda_73536ef6a7ee89bb5b58de675fe62586_::operator()_::_1_::dtor$0 @ 0x1800D63C5 (__lambda_73536ef6a7ee89bb5b58de675fe62586_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF1D4 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::~DdiSource_InputThreadInit(
        SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
