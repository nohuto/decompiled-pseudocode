/*
 * XREFs of ?StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801BB370
 * Callers:
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1801BA0F0 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x1801F6050 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004A580 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18016B3C8 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$0A@@@QEAAXXZ @ 0x1801BE4B8 (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgR_ea_1801BE4B8.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v5; // rax
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+20h] BYREF
  DWORD v7; // [rsp+58h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,0>::zInternalStart(*((_QWORD *)this + 6));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, (PBOOL)&SRWLock, &Context)
    && (_DWORD)SRWLock )
  {
    Context = qword_1805CC310;
    qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v2);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
  }
  v3 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v3 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v9 = 4LL;
    v7 = CurrentThreadId;
    v5 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1804FF972,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v5,
      (__int64)&v9,
      (__int64)&v7);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)((char *)this + 8));
}
