/*
 * XREFs of ?SpatialInteractionEyeGazeObjectDevice_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800DC984
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800DC810 (-RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInteractionEyeGazeObjectDevice_Added_(
        SpatialInteractionDevices::SpatialInteractionTrace *this)
{
  _QWORD *v1; // rax
  ULONG v2; // edx
  __int64 v3; // r10
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v1 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v1[1] > 4u && tlgKeywordOn(v1[1], 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801CD8D9, 0LL, 0LL, v2, &v4);
}
