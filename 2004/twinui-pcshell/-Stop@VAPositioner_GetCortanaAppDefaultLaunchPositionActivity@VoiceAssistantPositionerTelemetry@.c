/*
 * XREFs of ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x1803E45E0
 * Callers:
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x1803E0FA0 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173618 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644444444@Z @ 0x1803DE32C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803DE32C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1803DEB00 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  LONG left; // [rsp+E8h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+ECh] [rbp-7Ch] BYREF
  __int64 v19; // [rsp+F0h] [rbp-78h] BYREF
  LONG v20; // [rsp+F8h] [rbp-70h] BYREF
  LONG v21; // [rsp+FCh] [rbp-6Ch] BYREF
  LONG v22; // [rsp+100h] [rbp-68h] BYREF
  LONG top; // [rsp+104h] [rbp-64h] BYREF
  LONG v24; // [rsp+108h] [rbp-60h] BYREF
  LONG v25; // [rsp+10Ch] [rbp-5Ch] BYREF
  WINBOOL v26; // [rsp+110h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+118h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+120h] [rbp-48h] BYREF
  LONG bottom; // [rsp+124h] [rbp-44h] BYREF
  LONG right; // [rsp+128h] [rbp-40h] BYREF
  _DWORD v31[3]; // [rsp+12Ch] [rbp-3Ch] BYREF
  __int64 v32; // [rsp+138h] [rbp-30h] BYREF
  __int64 v33; // [rsp+140h] [rbp-28h] BYREF
  __int64 v34; // [rsp+148h] [rbp-20h] BYREF
  __int64 v35; // [rsp+150h] [rbp-18h] BYREF
  __int64 v36; // [rsp+158h] [rbp-10h] BYREF
  __int64 v37; // [rsp+160h] [rbp-8h] BYREF
  __int64 v38; // [rsp+168h] [rbp+0h] BYREF
  __int64 v39; // [rsp+170h] [rbp+8h] BYREF
  __int64 v40; // [rsp+178h] [rbp+10h] BYREF

  v6 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 76);
  if ( v7 < 0 && v7 == *(_DWORD *)(v6 + 84) )
    v8 = v6 + 80;
  else
    v8 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v8 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805CD228;
      qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
      qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v9);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      bottom = a3->bottom;
      right = a3->right;
      v31[0] = a3->top;
      left = a3->left;
      CurrentThreadId = a2->bottom;
      LODWORD(v19) = a2->right;
      HIDWORD(v19) = a2->top;
      v20 = a2->left;
      v32 = *(_QWORD *)(v8 + 112);
      v33 = *(_QWORD *)(v8 + 104);
      v21 = *(_DWORD *)(v8 + 96);
      v34 = *(_QWORD *)(v8 + 88);
      v35 = *(_QWORD *)(v8 + 80);
      v22 = *(_DWORD *)(v8 + 72);
      v36 = *(_QWORD *)(v8 + 64);
      top = *(_DWORD *)(v8 + 24);
      v37 = *(_QWORD *)(v8 + 16);
      v24 = *(_DWORD *)v8;
      v38 = *(_QWORD *)(v8 + 120);
      v25 = *(_DWORD *)(v8 + 56);
      v39 = *(_QWORD *)(v8 + 48);
      v26 = *(_DWORD *)(v8 + 4);
      v40 = 0x1000000LL;
      *(_QWORD *)&v31[1] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_1805217F5,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v12,
        (__int64)&v31[1],
        (__int64)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (__int64)&v24,
        (const WCHAR **)&v37,
        (__int64)&top,
        (const wchar_t **)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v21,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v20,
        (__int64)&v19 + 4,
        (__int64)&v19,
        (__int64)&CurrentThreadId,
        (__int64)&left,
        (__int64)v31,
        (__int64)&right,
        (__int64)&bottom);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v26, &Context) && v26 )
    {
      Context = &qword_1805CD228;
      qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
      qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v13);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
    }
    v14 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v14 > 4u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      v25 = a3->bottom;
      v24 = a3->right;
      top = a3->top;
      v22 = a3->left;
      v21 = a2->bottom;
      v20 = a2->right;
      v19 = *(_QWORD *)&a2->left;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 6);
      left = *(_DWORD *)(v15 + 76);
      *(_QWORD *)&v31[1] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        byte_1805219F0,
        (const GUID *)(v15 + 8),
        v16,
        (__int64)&v31[1],
        (__int64)&left,
        (__int64)&CurrentThreadId,
        (__int64)&v19,
        (__int64)&v19 + 4,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&top,
        (__int64)&v24,
        (__int64)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)((char *)this + 8));
}
