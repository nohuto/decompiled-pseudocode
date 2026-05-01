/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180307850
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1803083C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180308B10 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173618 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18029FBB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802EBBCC (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444@Z @ 0x1802F8EB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802F8EB0.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v6; // esi
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  _DWORD *v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // eax
  int v22; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v23; // [rsp+CCh] [rbp-7Ch] BYREF
  int v24; // [rsp+D0h] [rbp-78h] BYREF
  int v25; // [rsp+D4h] [rbp-74h] BYREF
  int v26; // [rsp+D8h] [rbp-70h] BYREF
  int v27; // [rsp+DCh] [rbp-6Ch] BYREF
  int v28; // [rsp+E0h] [rbp-68h] BYREF
  int v29; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+100h] [rbp-48h] BYREF
  __int64 v34; // [rsp+108h] [rbp-40h] BYREF
  __int64 v35; // [rsp+110h] [rbp-38h] BYREF
  __int64 v36; // [rsp+118h] [rbp-30h] BYREF
  __int64 v37; // [rsp+120h] [rbp-28h] BYREF
  __int64 v38; // [rsp+128h] [rbp-20h] BYREF
  __int64 v39; // [rsp+130h] [rbp-18h] BYREF
  __int64 v40; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 6);
  v6 = a4;
  v8 = a3;
  v9 = *(_DWORD *)(v4 + 76);
  if ( v9 < 0 && v9 == *(_DWORD *)(v4 + 84) )
    v10 = v4 + 80;
  else
    v10 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v12 = wil::details::static_lazy<XamlSwitcherLogging>::get(
          v11,
          _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( v10 )
  {
    v13 = (_DWORD *)v12[1];
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v31 = *(_QWORD *)(v10 + 112);
      v32 = *(_QWORD *)(v10 + 104);
      v16 = *((_QWORD *)this + 6);
      v28 = *(_DWORD *)(v10 + 96);
      v17 = *(_QWORD *)(v10 + 88);
      v30 = 0LL;
      v33 = v17;
      v34 = *(_QWORD *)(v10 + 80);
      v29 = *(_DWORD *)(v10 + 72);
      v35 = *(_QWORD *)(v10 + 64);
      v22 = *(_DWORD *)(v10 + 24);
      v36 = *(_QWORD *)(v10 + 16);
      v23 = *(_DWORD *)v10;
      v37 = *(_QWORD *)(v10 + 120);
      v24 = *(_DWORD *)(v10 + 56);
      v38 = *(_QWORD *)(v10 + 48);
      v25 = *(_DWORD *)(v10 + 4);
      LODWORD(v40) = v6;
      v26 = v8;
      v27 = a2;
      v39 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned __int8 *)dword_1805161F6,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v30,
        (__int64)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (__int64)&v23,
        (const WCHAR **)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (__int64)&v29,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v28,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v40);
    }
  }
  else
  {
    v18 = (_DWORD *)v12[1];
    if ( *v18 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
    {
      LODWORD(v40) = v6;
      v25 = v8;
      v24 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v21 = *(_DWORD *)(v20 + 76);
      v30 = 0LL;
      v22 = v21;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v18,
        byte_18051634C,
        (const GUID *)(v20 + 8),
        0LL,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v40);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowXamlTaskView *)((char *)this + 8));
}
