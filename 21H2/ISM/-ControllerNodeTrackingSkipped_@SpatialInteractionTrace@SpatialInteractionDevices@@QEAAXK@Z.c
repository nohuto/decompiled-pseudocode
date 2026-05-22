/*
 * XREFs of ?ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800CF304
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D384C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeTrackingSkipped_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2)
{
  LPVOID v3; // rax
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v3 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v3 + 1), 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801CC00D, 0LL, 0LL, 3u, &v6);
  }
}
