/*
 * XREFs of ?SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@JW4SPATIAL_TRACKING_STATE@@AEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800D8AD4
 * Callers:
 *     _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800D5EC0 (_lambda_2610a4571c07b034f8353f9aca44fe5c_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStartTracking_(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-31h] BYREF
  __int64 v16; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+70h] [rbp-9h]
  int *v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  int *v20; // [rsp+88h] [rbp+Fh]
  __int64 v21; // [rsp+90h] [rbp+17h]
  int *v22; // [rsp+98h] [rbp+1Fh]
  __int64 v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]
  __int64 v25; // [rsp+B0h] [rbp+37h]

  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         a1,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 4u )
  {
    LOBYTE(v8) = tlgKeywordOn(v8[1], 2LL);
    if ( (_BYTE)v8 )
    {
      v24 = a5;
      v23 = v9;
      v21 = v9;
      v12 = *(_DWORD *)(a5 + 16);
      v22 = &v12;
      v20 = &v13;
      v18 = &v14;
      v19 = v9;
      v13 = a4;
      v14 = a3;
      v25 = 16LL;
      v16 = a2;
      v17 = 16LL;
      LOBYTE(v8) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801CBBC2, 0LL, 0LL, 7u, &v15);
    }
  }
  return (char)v8;
}
