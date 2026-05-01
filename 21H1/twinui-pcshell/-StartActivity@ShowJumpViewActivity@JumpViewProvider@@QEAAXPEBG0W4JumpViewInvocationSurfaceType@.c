/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801B67B8
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1801B386C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008BD90 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180147068 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@544@Z @ 0x1801B2878 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?CensorAumidAndAppPath@JumpViewTelemetryHelper@@YAXAEAPEBG0@Z @ 0x1801B3C54 (-CensorAumidAndAppPath@JumpViewTelemetryHelper@@YAXAEAPEBG0@Z.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1801B6EA8 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int16 *a3,
        int a4,
        int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  const GUID *v13; // rax
  int v14; // [rsp+50h] [rbp-20h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+20h] BYREF
  __int64 v20; // [rsp+98h] [rbp+28h] BYREF
  unsigned __int16 *v21; // [rsp+A0h] [rbp+30h] BYREF

  v21 = a3;
  v20 = (__int64)a2;
  JumpViewTelemetryHelper::CensorAumidAndAppPath(
    (LPCWSTR *)&v20,
    (const unsigned __int16 **)&v21,
    (const unsigned __int16 **)a3);
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD **)(wil::details::static_lazy<JumpViewProvider>::get(
                      v8,
                      _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  else
    *(_OWORD *)(v7 + 8) = 0LL;
  v10 = SRWLock;
  *(_DWORD *)v7 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = wil::details::static_lazy<JumpViewProvider>::get(
          v10,
          _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  v12 = *(_DWORD **)(v11 + 8);
  if ( *v12 > 5u && tlgKeywordOn(*(_QWORD *)(v11 + 8), 0x400000000000LL) )
  {
    LODWORD(SRWLock) = a5;
    v16 = (__int64)v21;
    v17 = v20;
    v14 = a4;
    v18 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v13 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v12,
      (unsigned __int8 *)dword_1804DAE4A,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v13,
      (__int64)&v18,
      (__int64)&CurrentThreadId,
      (const WCHAR **)&v17,
      (const WCHAR **)&v16,
      (__int64)&v14,
      (__int64)&SRWLock);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
