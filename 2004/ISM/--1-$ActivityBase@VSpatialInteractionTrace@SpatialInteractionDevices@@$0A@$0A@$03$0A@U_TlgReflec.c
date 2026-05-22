/*
 * XREFs of ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CDE28
 * Callers:
 *     ??1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE130 (--1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE1A8 (--1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _lambda_bf3e2a6d2db6a722ad52163451912338_::operator() @ 0x1800CE830 (_lambda_bf3e2a6d2db6a722ad52163451912338_--operator().c)
 *     ??1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800D5B00 (--1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800D5B2C (--1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800D5B58 (--1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@.c)
 *     _lambda_6a3155624c78cd50ce8884ce74998254_::operator() @ 0x1800D6264 (_lambda_6a3155624c78cd50ce8884ce74998254_--operator().c)
 *     _lambda_73536ef6a7ee89bb5b58de675fe62586_::operator() @ 0x1800D6314 (_lambda_73536ef6a7ee89bb5b58de675fe62586_--operator().c)
 *     ?OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D7CA0 (-OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Window.c)
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800D7E50 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 *     ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800D7F10 (-OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D817C (-RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800E09C0 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800E0AC0 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800962E4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CDEEC (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflecto_ea_1800CDEEC.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800D43A4 (-reset@-$shared_object@V-$ActivityData@VSpatialInteractionTrace@SpatialInteractionD_ea_1800D43A4.c)
 */

void __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
