/*
 * XREFs of ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180447A44
 * Callers:
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180448F60 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801AD1D4 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803F4910 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x18043853C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18043853C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180438EF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *this,
        const unsigned __int16 *a2,
        struct IVirtualDesktop *a3)
{
  int *v5; // rsi
  int v6; // eax
  int *v7; // rsi
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rdi
  __int64 v10; // r9
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+C8h] [rbp-68h] BYREF
  int v20; // [rsp+CCh] [rbp-64h] BYREF
  int v21; // [rsp+D0h] [rbp-60h] BYREF
  _DWORD v22[3]; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+110h] [rbp-20h] BYREF
  __int64 v30; // [rsp+118h] [rbp-18h] BYREF
  __int64 v31; // [rsp+120h] [rbp-10h] BYREF
  __int64 v32; // [rsp+128h] [rbp-8h] BYREF
  __int64 v33; // [rsp+130h] [rbp+0h] BYREF
  _BYTE v34[16]; // [rsp+138h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v34);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 < 0 && v6 == v5[21] )
    v7 = v5 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v7 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    v9 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v9 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      v25 = (__int64)VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(a2);
      v26 = (__int64)v34;
      v27 = *((_QWORD *)v7 + 14);
      v28 = *((_QWORD *)v7 + 13);
      v20 = v7[24];
      v29 = *((_QWORD *)v7 + 11);
      v30 = *((_QWORD *)v7 + 10);
      v21 = v7[18];
      v31 = *((_QWORD *)v7 + 8);
      v22[0] = v7[6];
      v32 = *((_QWORD *)v7 + 2);
      v15 = *v7;
      v33 = *((_QWORD *)v7 + 15);
      CurrentThreadId = v7[14];
      *(_QWORD *)&v22[1] = *((_QWORD *)v7 + 6);
      LODWORD(v17) = v7[1];
      v23 = 0x1000000LL;
      v24 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180525BFD,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v10,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v17,
        (const wchar_t **)&v22[1],
        (__int64)&CurrentThreadId,
        (const wchar_t **)&v33,
        (__int64)&v15,
        (const WCHAR **)&v32,
        (__int64)v22,
        (const wchar_t **)&v31,
        (__int64)&v21,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v20,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        &v26,
        (const WCHAR **)&v25);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v17, &Context)
      && (_DWORD)v17 )
    {
      Context = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v11);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      v24 = (__int64)VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(a2);
      v23 = (__int64)v34;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v15 = *(_DWORD *)(v13 + 76);
      *(_QWORD *)&v22[1] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        (__int64)v12,
        (unsigned __int8 *)dword_180525D4E,
        (const GUID *)(v13 + 8),
        v14,
        (__int64)&v22[1],
        (__int64)&v15,
        (__int64)&CurrentThreadId,
        &v23,
        (const WCHAR **)&v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)((char *)this + 8));
}
