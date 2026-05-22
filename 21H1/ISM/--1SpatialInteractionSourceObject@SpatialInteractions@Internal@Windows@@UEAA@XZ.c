/*
 * XREFs of ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800D61E4
 * Callers:
 *     ??_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D6C60 (--_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::SpatialInteractionEyeGazeSourceObject_::_1_::dtor$0 @ 0x1800DB858 (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeSourceObject--SpatialInteracti.c)
 *     ??1SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DB920 (--1SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SpatialInteractionSourceHand_::_1_::dtor$0 @ 0x1800DEA5A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceHand--SpatialInteractionSourceH.c)
 *     ??1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DEA80 (--1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??1SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D6198 (--1SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?SpatialObjectStateStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@II@Z @ 0x1800D9094 (-SpatialObjectStateStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  const struct _GUID *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::`vftable';
  v2 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                               *((_QWORD *)this + 15),
                               v7);
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v3) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v4,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStateStatistics_(
      v5,
      v2,
      *((_DWORD *)this + 36),
      *((_DWORD *)this + 37));
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 15);
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(this);
}
