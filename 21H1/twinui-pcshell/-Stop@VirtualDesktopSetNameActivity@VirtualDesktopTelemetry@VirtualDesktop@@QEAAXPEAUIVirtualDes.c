/*
 * XREFs of ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x180418D84
 * Callers:
 *     ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180417C90 (-SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014F078 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180415838 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180415838.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *this,
        struct IVirtualDesktop *a2,
        char a3)
{
  int *v5; // rsi
  int v6; // eax
  int *v7; // rsi
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  __int64 v14; // r8
  _BYTE v15[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD CurrentThreadId; // [rsp+C8h] [rbp-78h] BYREF
  WINBOOL v18; // [rsp+CCh] [rbp-74h] BYREF
  _QWORD *v19; // [rsp+D0h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+D8h] [rbp-68h] BYREF
  int v21; // [rsp+DCh] [rbp-64h] BYREF
  int v22; // [rsp+E0h] [rbp-60h] BYREF
  _DWORD v23[3]; // [rsp+E4h] [rbp-5Ch] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+138h] [rbp-8h] BYREF
  __int64 v34; // [rsp+140h] [rbp+0h] BYREF
  _BYTE v35[24]; // [rsp+148h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+160h] [rbp+20h] BYREF
  _DWORD *v37; // [rsp+180h] [rbp+40h]
  int v38; // [rsp+188h] [rbp+48h]
  int v39; // [rsp+18Ch] [rbp+4Ch]
  int *v40; // [rsp+190h] [rbp+50h]
  int v41; // [rsp+198h] [rbp+58h]
  int v42; // [rsp+19Ch] [rbp+5Ch]
  DWORD *p_CurrentThreadId; // [rsp+1A0h] [rbp+60h]
  int v44; // [rsp+1A8h] [rbp+68h]
  int v45; // [rsp+1ACh] [rbp+6Ch]
  _BYTE *v46; // [rsp+1B0h] [rbp+70h]
  int v47; // [rsp+1B8h] [rbp+78h]
  int v48; // [rsp+1BCh] [rbp+7Ch]
  _BYTE *v49; // [rsp+1C0h] [rbp+80h]
  int v50; // [rsp+1C8h] [rbp+88h]
  int v51; // [rsp+1CCh] [rbp+8Ch]
  __int64 *v52; // [rsp+1D0h] [rbp+90h]
  int v53; // [rsp+1D8h] [rbp+98h]
  int v54; // [rsp+1DCh] [rbp+9Ch]

  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v35);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 < 0 && v6 == v5[21] )
    v7 = v5 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v19 = 0LL;
  if ( v7 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&v19)
      && fPending )
    {
      v19 = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v9 = (_DWORD *)v19[1];
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v25 = 50331648LL;
      v15[0] = a3;
      v26 = (__int64)v35;
      v27 = *((_QWORD *)v7 + 14);
      v28 = *((_QWORD *)v7 + 13);
      v21 = v7[24];
      v29 = *((_QWORD *)v7 + 11);
      v30 = *((_QWORD *)v7 + 10);
      v22 = v7[18];
      v31 = *((_QWORD *)v7 + 8);
      v23[0] = v7[6];
      v32 = *((_QWORD *)v7 + 2);
      v16 = *v7;
      v33 = *((_QWORD *)v7 + 15);
      CurrentThreadId = v7[14];
      v34 = *((_QWORD *)v7 + 6);
      v18 = v7[1];
      *(_QWORD *)&v23[1] = 0x1000000LL;
      v24 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v10,
        (unsigned __int8 *)dword_1804FB960,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v11,
        (__int64)&v24,
        (__int64)&v23[1],
        (__int64)&v18,
        (const wchar_t **)&v34,
        (__int64)&CurrentThreadId,
        (const wchar_t **)&v33,
        (__int64)&v16,
        (const WCHAR **)&v32,
        (__int64)v23,
        (const wchar_t **)&v31,
        (__int64)&v22,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v21,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        &v26,
        (__int64)v15,
        (__int64)&v25);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v18, (LPVOID *)&v19) && v18 )
    {
      v19 = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v12);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v13 = (_DWORD *)v19[1];
    if ( *v13 > 5u && tlgKeywordOn(v19[1], 0x400000000000LL) )
    {
      v24 = 50331648LL;
      v15[0] = a3;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v16 = *(_DWORD *)(v14 + 76);
      *(_QWORD *)&v23[1] = 50331648LL;
      v52 = &v24;
      v53 = 8;
      v54 = 0;
      v49 = v15;
      v50 = 1;
      v51 = 0;
      v46 = v35;
      v47 = 16;
      v48 = 0;
      p_CurrentThreadId = &CurrentThreadId;
      v44 = 4;
      v45 = 0;
      v40 = &v16;
      v41 = 4;
      v42 = 0;
      v37 = &v23[1];
      v38 = 8;
      v39 = 0;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v13,
        (unsigned __int8 *)dword_1804FBDED,
        (const GUID *)(v14 + 8),
        0LL,
        8u,
        &v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)((char *)this + 8));
}
