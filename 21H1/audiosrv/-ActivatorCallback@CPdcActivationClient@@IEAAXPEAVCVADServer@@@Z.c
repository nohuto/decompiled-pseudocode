/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800EF37C
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800EF4D0 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x1800DD748 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800EF4F0 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  CVADServer **i; // rcx
  CPdcTimerActivation **v8; // r10
  int v9; // eax
  int v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+34h] [rbp-4Ch] BYREF
  int v12[2]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-40h] BYREF
  int *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v4 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v5,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 4u )
  {
    *(_QWORD *)v12 = a2;
    v14 = v12;
    v15 = 8;
    v16 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v6, byte_180169DEE, 0LL, 0LL, 3, (__int64)v13);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
  {
    CVADServer::QueryState(*i, &v11, &v10, v12);
    if ( v10 )
    {
      if ( !v12[0] )
        goto LABEL_16;
    }
    else if ( !v11 )
    {
      goto LABEL_16;
    }
    if ( *v8 )
      CPdcTimerActivation::Renew(*v8);
  }
LABEL_16:
  v9 = _Mtx_unlock((CPdcActivationClient *)((char *)this + 32));
  if ( v9 )
    std::_Throw_C_error(v9);
}
