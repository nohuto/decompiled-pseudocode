/*
 * XREFs of ??1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE15C
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800CFC18 (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization_::_1_::dtor$0 @ 0x1800CFD83 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--FinalizeIniti.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800962E4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CDE64 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF128 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$0.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800D434C (-reset@-$shared_object@V-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::~FinalizeControllerInitialization(
        SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)((char *)this + 8));
}
