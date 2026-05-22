/*
 * XREFs of ?InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x18016CE9C
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BE60 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800C9438 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x18016CE08 (-IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::InitDeviceHandeness(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        enum SpatialInteractionDevices::Handedness *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  __int64 v5; // rcx
  int Handedness; // ebx
  __int64 v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  Handedness = SpatialInteractionDevices::GetHandedness(
                 (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
                 (struct SpatialInteractionDevices::HID_HANDLE *)&v10,
                 a3);
  if ( Handedness < 0 )
  {
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v5) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v7,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
        v8,
        Handedness,
        *((_DWORD *)this + 2),
        L"Handedness");
    }
  }
  else
  {
    *(_DWORD *)a2 = v10;
  }
  return (unsigned int)Handedness;
}
