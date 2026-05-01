/*
 * XREFs of ?StopActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x180344070
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180053AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180120628 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014F078 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180335D94 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::StopActivity(
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  _DWORD *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // [rsp+A0h] [rbp-19h] BYREF
  int v15; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v25[4]; // [rsp+F0h] [rbp+37h] BYREF
  __int64 v26; // [rsp+120h] [rbp+67h] BYREF
  __int64 v27; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v5,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v7 = (_DWORD *)v6[1];
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v10 = *((_QWORD *)this + 6);
      v16 = *(_QWORD *)(v4 + 112);
      v17 = *(_QWORD *)(v4 + 104);
      LODWORD(v26) = *(_DWORD *)(v4 + 96);
      v18 = *(_QWORD *)(v4 + 88);
      v19 = *(_QWORD *)(v4 + 80);
      LODWORD(v27) = *(_DWORD *)(v4 + 72);
      v20 = *(_QWORD *)(v4 + 64);
      LODWORD(v28) = *(_DWORD *)(v4 + 24);
      v21 = *(_QWORD *)(v4 + 16);
      LODWORD(v29) = *(_DWORD *)v4;
      v22 = *(_QWORD *)(v4 + 120);
      v14 = *(_DWORD *)(v4 + 56);
      v23 = *(_QWORD *)(v4 + 48);
      v15 = *(_DWORD *)(v4 + 4);
      v24 = 0x1000000LL;
      v25[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v8,
        (unsigned __int8 *)dword_1804F429C,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)v25,
        (__int64)&v24,
        (__int64)&v15,
        (const wchar_t **)&v23,
        (__int64)&v14,
        (const wchar_t **)&v22,
        (__int64)&v29,
        (const WCHAR **)&v21,
        (__int64)&v28,
        (const wchar_t **)&v20,
        (__int64)&v27,
        (const wchar_t **)&v19,
        (const WCHAR **)&v18,
        (__int64)&v26,
        (const wchar_t **)&v17,
        (const WCHAR **)&v16);
    }
  }
  else
  {
    v11 = (_DWORD *)v6[1];
    if ( *v11 > 5u && tlgKeywordOn(v6[1], 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      LODWORD(v26) = CurrentThreadId;
      LODWORD(v27) = *(_DWORD *)(v13 + 76);
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1804F423F,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *)((char *)this + 8));
}
