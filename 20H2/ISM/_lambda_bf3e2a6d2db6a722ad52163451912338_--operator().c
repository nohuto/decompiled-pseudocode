/*
 * XREFs of _lambda_bf3e2a6d2db6a722ad52163451912338_::operator() @ 0x1800CE7A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bf3e2a6d2db6a722ad52163451912338__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3930 (std--_Func_impl_no_alloc__lambda_bf3e2a6d2db6a722ad52163451912338__void_std--shared_ea_1800D3930.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CDBAC (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CDD98 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF144 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800D22C8 (-StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2648 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_bf3e2a6d2db6a722ad52163451912338_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // eax
  _QWORD v6[40]; // [rsp+20h] [rbp-158h] BYREF

  v3 = *(_DWORD *)(*a2 + 12LL);
  v4 = *(_DWORD *)(*a2 + 8LL);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"DeviceRemoved");
  v6[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *)v6,
    v4,
    v3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 168LL))(*a2, 2LL);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v6,
    v5);
  v6[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
}
