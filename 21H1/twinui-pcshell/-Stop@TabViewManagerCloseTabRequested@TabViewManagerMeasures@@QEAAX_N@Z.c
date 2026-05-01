/*
 * XREFs of ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x1802572D4
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x1802496A0 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180251090 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005EC48 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014F078 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801FAD04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801FAD04.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801FAFD4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        char a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+130h] [rbp+0h] BYREF
  __int64 v33; // [rsp+140h] [rbp+10h] BYREF
  __int64 v34; // [rsp+148h] [rbp+18h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v7,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    v9 = (_DWORD *)v8[1];
    if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v12 = *((_QWORD *)this + 6);
      v23 = *((_QWORD *)v6 + 14);
      v13 = *((_QWORD *)v6 + 13);
      v22 = 0LL;
      v24 = v13;
      LODWORD(v33) = v6[24];
      v25 = *((_QWORD *)v6 + 11);
      v26 = *((_QWORD *)v6 + 10);
      LODWORD(v34) = v6[18];
      v27 = *((_QWORD *)v6 + 8);
      v18 = v6[6];
      v28 = *((_QWORD *)v6 + 2);
      v19 = *v6;
      v29 = *((_QWORD *)v6 + 15);
      v20 = v6[14];
      v30 = *((_QWORD *)v6 + 6);
      v21 = v6[1];
      LOBYTE(v32) = a2;
      v31[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v10,
        (unsigned __int8 *)dword_1804E3973,
        (const GUID *)(v12 + 8),
        v11,
        (__int64)&v22,
        (__int64)v31,
        (__int64)&v21,
        (const wchar_t **)&v30,
        (__int64)&v20,
        (const wchar_t **)&v29,
        (__int64)&v19,
        (const WCHAR **)&v28,
        (__int64)&v18,
        (const wchar_t **)&v27,
        (__int64)&v34,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v33,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (__int64)&v32);
    }
  }
  else
  {
    v14 = (_DWORD *)v8[1];
    if ( *v14 > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      LOBYTE(v32) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v33) = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v22 = 0LL;
      LODWORD(v34) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v14,
        byte_1804E3AC7,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v22,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)((char *)this + 8));
}
