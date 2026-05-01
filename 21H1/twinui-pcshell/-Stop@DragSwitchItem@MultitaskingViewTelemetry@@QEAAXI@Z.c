/*
 * XREFs of ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x18039DEE8
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18039C90C (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18004FEC4 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180189714 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x18027D840 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18027D840.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18027DE84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall MultitaskingViewTelemetry::DragSwitchItem::Stop(
        MultitaskingViewTelemetry::DragSwitchItem *this,
        int a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  BOOL inited; // eax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rdi
  enum _TABLETMODESTATE *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v15; // rdi
  enum _TABLETMODESTATE *v16; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // edx
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v21; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C8h] [rbp-68h] BYREF
  int v25; // [rsp+CCh] [rbp-64h] BYREF
  int v26; // [rsp+D0h] [rbp-60h] BYREF
  int v27; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v28; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp-28h] BYREF
  __int64 v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36[5]; // [rsp+118h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+150h] [rbp+20h] BYREF
  __int64 v38; // [rsp+160h] [rbp+30h] BYREF
  __int64 v39; // [rsp+168h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( v6 )
  {
    if ( inited && fPending )
    {
      Context = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v9 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v9 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v38, v10);
      LODWORD(v39) = v38;
      v38 = *((_QWORD *)v6 + 14);
      v11 = *((_QWORD *)this + 6);
      v29 = *((_QWORD *)v6 + 13);
      v12 = v6[24];
      v28 = 0LL;
      v25 = v12;
      v30 = *((_QWORD *)v6 + 11);
      v31 = *((_QWORD *)v6 + 10);
      v26 = v6[18];
      v32 = *((_QWORD *)v6 + 8);
      v27 = v6[6];
      v33 = *((_QWORD *)v6 + 2);
      v20 = *v6;
      v34 = *((_QWORD *)v6 + 15);
      v21 = v6[14];
      v35 = *((_QWORD *)v6 + 6);
      LODWORD(v22) = v6[1];
      v24 = a2;
      v36[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_1804F5E44,
        (const GUID *)(v11 + 8),
        v13,
        (__int64)&v28,
        (__int64)v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (__int64)&v21,
        (const wchar_t **)&v34,
        (__int64)&v20,
        (const WCHAR **)&v33,
        (__int64)&v27,
        (const wchar_t **)&v32,
        (__int64)&v26,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v25,
        (const wchar_t **)&v29,
        (const WCHAR **)&v38,
        (__int64)&v24,
        (__int64)&v39);
    }
  }
  else
  {
    if ( inited && fPending )
    {
      Context = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v14);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v15 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v15 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v38, v16);
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v19 = *(_DWORD *)(v18 + 76);
      v28 = 0LL;
      v21 = CurrentThreadId;
      LODWORD(v39) = v38;
      v20 = v19;
      LODWORD(v22) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v15,
        byte_1804F5DDB,
        (const GUID *)(v18 + 8),
        0LL,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v39);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MultitaskingViewTelemetry::DragSwitchItem *)((char *)this + 8));
}
