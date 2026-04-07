/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800C14C0
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800C110C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800C1590 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C1634 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

__int64 __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 result; // rax
  _DWORD *v8; // rcx
  int v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  int v11; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  int *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  result = wil::details::static_lazy<ScalingCompatLogging>::get(
             a1,
             _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
  v8 = *(_DWORD **)(result + 8);
  if ( *v8 > 5u )
  {
    v9 = a4;
    v17 = &v9;
    v10 = a3;
    v15 = &v10;
    v11 = a2;
    v13 = &v11;
    v18 = 4LL;
    v16 = 4LL;
    v14 = 4LL;
    return tlgWriteTransfer_EventWriteTransfer((int)v8, (int)&dword_1800D1DC6, 0, 0, 5u, &v12);
  }
  return result;
}
