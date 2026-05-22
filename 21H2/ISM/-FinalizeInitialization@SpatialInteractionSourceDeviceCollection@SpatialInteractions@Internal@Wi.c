/*
 * XREFs of ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800CFFE8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9ffd7956cb86f8f3da5bea755a23b0b4__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3D80 (std--_Func_impl_no_alloc__lambda_9ffd7956cb86f8f3da5bea755a23b0b4__void_std--shared_ea_1800D3D80.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$?0K@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAK@Z @ 0x1800CCAE0 (--$-0K@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@AEAA@.c)
 *     ??$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAK$$QEAPEB_W$$QEAG22@Z @ 0x1800CCCB4 (--$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX.c)
 *     ??1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE52C (--1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D29B0 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0.c)
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D384C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        _QWORD *a2)
{
  int v4; // eax
  int updated; // edi
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v8; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v9; // [rsp+36h] [rbp-CAh] BYREF
  unsigned __int16 v10[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v13[3]; // [rsp+48h] [rbp-B8h] BYREF
  char v14; // [rsp+60h] [rbp-A0h]
  _BYTE v15[320]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0;
  v11 = *(_DWORD *)(*a2 + 8LL);
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::FinalizeControllerInitialization(
    (SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v15,
    (__int64)a2,
    &v11);
  v13[1] = (const wchar_t *)&v7;
  v13[2] = (const wchar_t *)v15;
  v14 = 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v7 = v4;
  if ( v4 >= 0 )
  {
    *(_BYTE *)(*a2 + 106LL) = 1;
    updated = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(this);
    if ( updated >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 24LL))(*a2);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
      v10[0] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
      v13[0] = (const wchar_t *)(**(__int64 (__fastcall ***)(_QWORD))*a2)(*a2);
      v12 = *(_DWORD *)(*a2 + 8LL);
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added<unsigned long,wchar_t const *,unsigned short,unsigned short,unsigned short>(
        &v12,
        v13,
        v10,
        &v9,
        &v8);
      updated = 0;
    }
    v4 = v7;
  }
  else
  {
    updated = v4;
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v15,
    (unsigned int)v4);
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::~FinalizeControllerInitialization((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v15);
  return (unsigned int)updated;
}
