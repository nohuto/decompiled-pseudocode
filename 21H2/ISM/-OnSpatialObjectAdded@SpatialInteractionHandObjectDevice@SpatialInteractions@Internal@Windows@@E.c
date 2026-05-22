/*
 * XREFs of ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800E0D90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CE00C (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CE1F8 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CF5A4 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2AA8 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E06F4 (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 *     ?StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800E1B68 (-StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPE.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnSpatialObjectAdded(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Holographic::ISpatialObjectWatcher *a2,
        const struct _GUID *a3)
{
  __int128 v5; // xmm0
  __int64 v6; // rax
  const wchar_t *v7; // rbx
  int v8; // eax
  _QWORD v9[40]; // [rsp+30h] [rbp-168h] BYREF

  v5 = *(_OWORD *)(*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectWatcher *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = v5 - SPATIALPROP_HandTracker_HandList;
  if ( (_QWORD)v5 == SPATIALPROP_HandTracker_HandList )
    v6 = *((_QWORD *)&v5 + 1) + 0x7BF5085A9D15D860LL;
  if ( !v6 )
  {
    v7 = (const wchar_t *)&this[9];
    if ( this[12].Ptr >= (PVOID)8 )
      v7 = *(const wchar_t **)v7;
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v9,
      (__int64)"HandSpatialObjectAdded");
    v9[0] = &SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::`vftable';
    SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::StartActivity(
      (SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded *)v9,
      v7,
      a3);
    v8 = Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded(
           this - 1,
           a3);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v9,
      v8);
    v9[0] = &SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::`vftable';
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
}
