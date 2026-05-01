/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1803FC82C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F46C4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002AEA0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180081164 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44445444444445444454444@Z @ 0x1803F32BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1803F78FC (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+110h] [rbp-80h] BYREF
  int v9; // [rsp+114h] [rbp-7Ch] BYREF
  int v10; // [rsp+118h] [rbp-78h] BYREF
  int v11; // [rsp+11Ch] [rbp-74h] BYREF
  int v12; // [rsp+120h] [rbp-70h] BYREF
  int v13; // [rsp+124h] [rbp-6Ch] BYREF
  int v14; // [rsp+128h] [rbp-68h] BYREF
  int v15; // [rsp+12Ch] [rbp-64h] BYREF
  int v16; // [rsp+130h] [rbp-60h] BYREF
  int v17; // [rsp+134h] [rbp-5Ch] BYREF
  int v18; // [rsp+138h] [rbp-58h] BYREF
  int v19; // [rsp+13Ch] [rbp-54h] BYREF
  int v20; // [rsp+140h] [rbp-50h] BYREF
  int v21; // [rsp+144h] [rbp-4Ch] BYREF
  int v22; // [rsp+148h] [rbp-48h] BYREF
  int v23; // [rsp+14Ch] [rbp-44h] BYREF
  int v24; // [rsp+150h] [rbp-40h] BYREF
  int v25; // [rsp+154h] [rbp-3Ch] BYREF
  int v26; // [rsp+158h] [rbp-38h] BYREF
  int v27; // [rsp+15Ch] [rbp-34h] BYREF
  int v28; // [rsp+160h] [rbp-30h] BYREF
  int v29; // [rsp+164h] [rbp-2Ch] BYREF
  int v30; // [rsp+168h] [rbp-28h] BYREF
  int v31; // [rsp+16Ch] [rbp-24h] BYREF
  int v32; // [rsp+170h] [rbp-20h] BYREF
  DWORD v33; // [rsp+174h] [rbp-1Ch] BYREF
  _QWORD *v34; // [rsp+178h] [rbp-18h] BYREF
  __int64 v35; // [rsp+180h] [rbp-10h] BYREF
  __int64 v36; // [rsp+188h] [rbp-8h] BYREF
  __int64 v37; // [rsp+190h] [rbp+0h] BYREF
  __int64 v38; // [rsp+198h] [rbp+8h] BYREF
  __int64 v39; // [rsp+1A0h] [rbp+10h] BYREF
  _DWORD v40[10]; // [rsp+1B0h] [rbp+20h] BYREF
  __int64 v41; // [rsp+1D8h] [rbp+48h] BYREF
  __int128 v42; // [rsp+1E0h] [rbp+50h]
  __int64 v43; // [rsp+1F0h] [rbp+60h]
  __int64 v44; // [rsp+1F8h] [rbp+68h]
  __int128 v45; // [rsp+200h] [rbp+70h] BYREF
  __int64 v46; // [rsp+210h] [rbp+80h]
  __int64 v47; // [rsp+218h] [rbp+88h]
  __int64 v48; // [rsp+220h] [rbp+90h]
  int v49; // [rsp+228h] [rbp+98h]
  int v50; // [rsp+22Ch] [rbp+9Ch]
  int v51; // [rsp+230h] [rbp+A0h]
  int v52; // [rsp+234h] [rbp+A4h]
  __int128 v53; // [rsp+250h] [rbp+C0h] BYREF
  __int64 v54; // [rsp+260h] [rbp+D0h]
  __int64 v55; // [rsp+268h] [rbp+D8h]
  __int64 v56; // [rsp+270h] [rbp+E0h]
  __int64 v57; // [rsp+278h] [rbp+E8h] BYREF
  __int128 v58; // [rsp+280h] [rbp+F0h]
  __int64 v59; // [rsp+290h] [rbp+100h]
  __int64 v60; // [rsp+298h] [rbp+108h]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+138h]

  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v40);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    v34 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&v34)
      && fPending )
    {
      v34 = &qword_1805CD228;
      qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
      qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v4);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
    }
    v5 = (_DWORD *)v34[1];
    if ( *v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = HIDWORD(v60);
      v10 = v60;
      v11 = HIDWORD(v59);
      v12 = v59;
      v35 = v57;
      v13 = HIDWORD(v56);
      v14 = v56;
      v15 = HIDWORD(v55);
      v16 = v55;
      v36 = v53;
      v17 = v52;
      v18 = v51;
      v19 = v50;
      v20 = v49;
      v21 = HIDWORD(v48);
      v22 = v48;
      v23 = HIDWORD(v47);
      v24 = v47;
      v37 = v45;
      v25 = HIDWORD(v44);
      v26 = v44;
      v27 = HIDWORD(v43);
      v28 = v43;
      v38 = v41;
      v29 = v40[3];
      v30 = v40[2];
      v31 = v40[1];
      v32 = v40[0];
      v33 = CurrentThreadId;
      v39 = 0LL;
      v7 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (unsigned __int8 *)dword_180522004,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v7,
        (__int64)&v39,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (const WCHAR **)&v38,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (const WCHAR **)&v37,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (const WCHAR **)&v36,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (const WCHAR **)&v35,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
    if ( !*((_DWORD *)this + 8) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplyLayoutOperationHelper *)((char *)this + 8));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v57);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v53);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v45);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v41);
}
