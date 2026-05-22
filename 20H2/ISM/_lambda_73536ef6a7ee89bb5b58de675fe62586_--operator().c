/*
 * XREFs of _lambda_73536ef6a7ee89bb5b58de675fe62586_::operator() @ 0x1800D6284
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x1800DAAC0 (std--_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows--In_ea_1800DAAC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CDBAC (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CDD98 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF144 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2648 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ?AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D68C0 (-AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@@Z @ 0x1800D8DDC (-StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_73536ef6a7ee89bb5b58de675fe62586_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"DdiSource_InputThreadInit");
  v5[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *)v5,
    (const struct _GUID *)(a1 + 8));
  v4 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSourceOnInputThread(
         *(_QWORD *)a1,
         a1 + 24,
         a2);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v5,
    v4);
  v5[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
}
