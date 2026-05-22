/*
 * XREFs of ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D863C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x1800DAF80 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--In_ea_1800DAF80.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CE0FC (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CE2E8 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF694 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF774 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2B98 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ?StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800D942C (-StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@Q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSourceOnInputThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  const wchar_t *v7; // rbx
  volatile signed __int32 *v8; // rdx
  int v9; // eax
  int v10; // eax
  std::_Ref_count_base *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v7 = (const wchar_t *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 104) >= 8uLL )
    v7 = *(const wchar_t **)v7;
  (*(void (__fastcall **)(_QWORD, struct _GUID *))(**(_QWORD **)(*a3 + 120LL) + 48LL))(*(_QWORD *)(*a3 + 120LL), &v12);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"DdiSource_InputThreadRemoval");
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval *)v13,
    v7,
    &v12);
  *(_OWORD *)v11 = 0LL;
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a3[1];
  }
  v11[0] = *(std::_Ref_count_base **)a3;
  v11[1] = (std::_Ref_count_base *)v8;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(
         this,
         v11,
         *((_DWORD *)v11[0] + 3),
         0,
         a4);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      501LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v9);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 216LL))(*a3, a4);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      502LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v10);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v13,
    0);
  if ( v11[1] )
    std::_Ref_count_base::_Decref(v11[1]);
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
