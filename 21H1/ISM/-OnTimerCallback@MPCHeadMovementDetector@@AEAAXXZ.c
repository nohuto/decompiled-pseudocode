/*
 * XREFs of ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CB44
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x18008C060 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800752AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18008C4A8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008C9A8 (-IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CD1C (-QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18008CE04 (-WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ.c)
 */

void __fastcall MPCHeadMovementDetector::OnTimerCallback(MPCHeadMovementDetector *this)
{
  ULONGLONG TickCount64; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPVOID v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  _DWORD *v13; // r10
  __int64 v14; // r10
  int v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF

  TickCount64 = GetTickCount64();
  v3 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 5) = TickCount64;
  if ( !v3 )
  {
    if ( !MPCHeadMovementDetector::AccumulateYawVelocity((__int64 **)this) )
      goto LABEL_19;
    if ( MPCHeadMovementDetector::WasThereSufficientYawMovement(this) )
    {
      MPCHeadMovementDetector::QueueIdleTimerKick(this);
      RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL);
      v6 = wil::details::static_lazy<ISMTracing>::get(
             v5,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v6 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 0x400000000001LL) )
      {
        v15 = 0;
        v16 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v7,
          byte_1801C9F67,
          0LL,
          0LL,
          (__int64)&v16,
          (__int64)&v15);
      }
      v8 = *((_QWORD *)this + 5);
      v9 = v8 + *((unsigned int *)this + 35);
      *((_QWORD *)this + 6) = v8;
      goto LABEL_18;
    }
    v10 = *((_QWORD *)this + 5);
    if ( *((_QWORD *)this + 16) > v10 )
    {
LABEL_19:
      MPCHeadMovementDetector::IdleTelemetry(this);
      goto LABEL_20;
    }
    v11 = *((_QWORD *)this + 6);
    v12 = wil::details::static_lazy<ISMTracing>::get(
            v4,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v13 = (_DWORD *)v12[1];
    if ( v11 )
    {
      if ( *v13 <= 4u || !tlgKeywordOn(v12[1], 0x400000000001LL) )
        goto LABEL_17;
      v15 = (v10 - v11) / 0x3E8;
    }
    else
    {
      if ( *v13 <= 4u || !tlgKeywordOn(v12[1], 0x400000000001LL) )
        goto LABEL_17;
      v15 = -1;
    }
    v16 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v14,
      byte_1801C9F67,
      0LL,
      0LL,
      (__int64)&v16,
      (__int64)&v15);
LABEL_17:
    v9 = *((_QWORD *)this + 5) + *((unsigned int *)this + 35);
LABEL_18:
    *((_QWORD *)this + 16) = v9;
    goto LABEL_19;
  }
LABEL_20:
  MPCHeadMovementDetector::ScheduleNextTimerCallback(this);
}
