/*
 * XREFs of ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x18016F218
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x18016A80C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D46AC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SetHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int16 a7)
{
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  char v13; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int16 v14; // [rsp+3Ah] [rbp-6Fh] BYREF
  unsigned __int16 v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+40h] [rbp-69h] BYREF
  int v17; // [rsp+44h] [rbp-65h] BYREF
  int v18; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-51h] BYREF
  int *v20; // [rsp+78h] [rbp-31h]
  __int64 v21; // [rsp+80h] [rbp-29h]
  int *v22; // [rsp+88h] [rbp-21h]
  __int64 v23; // [rsp+90h] [rbp-19h]
  int *v24; // [rsp+98h] [rbp-11h]
  __int64 v25; // [rsp+A0h] [rbp-9h]
  unsigned __int16 *v26; // [rsp+A8h] [rbp-1h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  char *v28; // [rsp+B8h] [rbp+Fh]
  __int64 v29; // [rsp+C0h] [rbp+17h]
  unsigned __int16 *v30; // [rsp+C8h] [rbp+1Fh]
  __int64 v31; // [rsp+D0h] [rbp+27h]

  v10 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          (__int64)this,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u && tlgKeywordOn(v10[1], 2LL) )
  {
    v14 = a7;
    v13 = a6;
    v15 = a5;
    v30 = &v14;
    v28 = &v13;
    v26 = &v15;
    v24 = &v16;
    v22 = &v17;
    v20 = &v18;
    v31 = v11;
    v27 = v11;
    v16 = a4;
    v17 = a3;
    v18 = a2;
    v29 = 1LL;
    v25 = 4LL;
    v23 = 4LL;
    v21 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_1801D19C0, 0LL, 0LL, 8u, &v19);
  }
}
