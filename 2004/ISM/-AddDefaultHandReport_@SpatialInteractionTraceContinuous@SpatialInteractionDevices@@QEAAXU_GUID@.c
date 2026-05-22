/*
 * XREFs of ?AddDefaultHandReport_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JH@Z @ 0x1800DE74C
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800E0BC0 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D41EC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::AddDefaultHandReport_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        int a4)
{
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r10
  int v10; // [rsp+38h] [rbp-39h] BYREF
  __int64 v11; // [rsp+40h] [rbp-31h] BYREF
  __int64 v12; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-19h] BYREF
  struct _GUID *v14; // [rsp+78h] [rbp+7h]
  __int64 v15; // [rsp+80h] [rbp+Fh]
  __int64 *v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  __int64 *v18; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+A0h] [rbp+2Fh]
  int *v20; // [rsp+A8h] [rbp+37h]
  __int64 v21; // [rsp+B0h] [rbp+3Fh]

  v7 = 1000000 * a3 / qword_180208310;
  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
         (__int64)this,
         _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 5u && tlgKeywordOn(v8[1], 2LL) )
  {
    v10 = a4;
    v20 = &v10;
    v11 = v7;
    v18 = &v11;
    v12 = a3;
    v16 = &v12;
    v21 = 4LL;
    v19 = 8LL;
    v17 = 8LL;
    v14 = a2;
    v15 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801CCC19, 0LL, 0LL, 6u, &v13);
  }
}
