/*
 * XREFs of ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180342818
 * Callers:
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18033B500 (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008BD90 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18029AC60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180335D94 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803360AC (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::StartActivity(
        __int64 a1,
        int a2,
        int a3,
        char a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  int v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+54h] [rbp-34h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  char v16; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v8,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
  {
    v16 = a4;
    v12 = a3;
    v13 = a2;
    v15 = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v10,
      byte_1804F32D0,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v11,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v16);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
