/*
 * XREFs of ?OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D8160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CE0FC (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CE2E8 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF694 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2B98 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ?AddSource@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D6D04 (-AddSource@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJA.c)
 *     ?StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800D9268 (-StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnInputSourceAdded(
        __int64 a1,
        __int64 a2,
        struct _GUID *a3,
        _QWORD *a4)
{
  const wchar_t *v4; // rbx
  unsigned int v8; // ebx
  _QWORD v10[40]; // [rsp+20h] [rbp-178h] BYREF

  v4 = (const wchar_t *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 104) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v10,
    (__int64)"DdiSource_BackgroundInit");
  v10[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit *)v10,
    v4,
    a3);
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSource(
         (RTL_SRWLOCK *)(a1 - 32),
         (__int128 *)a3,
         a4);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v10,
    v8);
  v10[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  return v8;
}
