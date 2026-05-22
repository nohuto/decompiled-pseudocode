/*
 * XREFs of ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x18016B99C
 * Callers:
 *     ??$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAKAEAJ1AEAN@Z @ 0x1801685BC (--$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        double a5)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v13; // [rsp+40h] [rbp-39h] BYREF
  double v14; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-21h] BYREF
  int *v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  int *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int *v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  double *v22; // [rsp+A8h] [rbp+2Fh]
  __int64 v23; // [rsp+B0h] [rbp+37h]

  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
  {
    v14 = a5;
    v21 = v9;
    v22 = &v14;
    v19 = v9;
    v20 = &v11;
    v18 = &v12;
    v16 = &v13;
    v17 = v9;
    v11 = a4;
    v12 = a3;
    v13 = a2;
    v23 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801D1E9A, 0LL, 0LL, 6u, &v15);
  }
}
