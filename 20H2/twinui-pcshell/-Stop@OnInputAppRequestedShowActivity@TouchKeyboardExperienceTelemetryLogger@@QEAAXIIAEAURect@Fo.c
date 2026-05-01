/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIAEAURect@Foundation@Windows@@_N@Z @ 0x180363C40
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18035F500 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801733F8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180356924 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180357E10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180357E10.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180358664 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperBy.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        DWORD a2,
        int a3,
        struct Windows::Foundation::Rect *a4,
        bool a5)
{
  int *v5; // rdi
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+E0h] [rbp-80h] BYREF
  DWORD v23; // [rsp+E4h] [rbp-7Ch] BYREF
  DWORD v24; // [rsp+E8h] [rbp-78h] BYREF
  int v25; // [rsp+ECh] [rbp-74h] BYREF
  int v26; // [rsp+F0h] [rbp-70h] BYREF
  int v27; // [rsp+F4h] [rbp-6Ch] BYREF
  int v28; // [rsp+F8h] [rbp-68h] BYREF
  int v29; // [rsp+FCh] [rbp-64h] BYREF
  int v30; // [rsp+100h] [rbp-60h] BYREF
  int v31; // [rsp+104h] [rbp-5Ch] BYREF
  int v32; // [rsp+108h] [rbp-58h] BYREF
  int v33; // [rsp+10Ch] [rbp-54h] BYREF
  __int64 v34; // [rsp+110h] [rbp-50h] BYREF
  __int64 v35; // [rsp+118h] [rbp-48h] BYREF
  __int64 v36; // [rsp+120h] [rbp-40h] BYREF
  __int64 v37; // [rsp+128h] [rbp-38h] BYREF
  __int64 v38; // [rsp+130h] [rbp-30h] BYREF
  __int64 v39; // [rsp+138h] [rbp-28h] BYREF
  __int64 v40; // [rsp+140h] [rbp-20h] BYREF
  __int64 v41; // [rsp+148h] [rbp-18h] BYREF
  __int64 v42; // [rsp+150h] [rbp-10h] BYREF
  __int64 v43; // [rsp+158h] [rbp-8h] BYREF
  __int64 v44; // [rsp+180h] [rbp+20h] BYREF

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 < 0 && v10 == v5[21] )
    v11 = v5 + 20;
  else
    v11 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v13 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v12,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v11 )
  {
    v14 = (_DWORD *)v13[1];
    if ( *v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      LOBYTE(v44) = a5;
      v30 = *((_DWORD *)a4 + 3);
      v31 = *((_DWORD *)a4 + 2);
      v32 = *((_DWORD *)a4 + 1);
      v33 = *(_DWORD *)a4;
      v35 = *((_QWORD *)v11 + 14);
      v36 = *((_QWORD *)v11 + 13);
      v17 = *((_QWORD *)this + 6);
      v24 = v11[24];
      v37 = *((_QWORD *)v11 + 11);
      v38 = *((_QWORD *)v11 + 10);
      v25 = v11[18];
      v39 = *((_QWORD *)v11 + 8);
      v26 = v11[6];
      v40 = *((_QWORD *)v11 + 2);
      v27 = *v11;
      v41 = *((_QWORD *)v11 + 15);
      v28 = v11[14];
      v42 = *((_QWORD *)v11 + 6);
      v29 = v11[1];
      v43 = 0x1000000LL;
      v34 = 0x1000000LL;
      v22 = a3;
      v23 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v15,
        (unsigned __int8 *)dword_18051CC13,
        (const GUID *)(v17 + 8),
        v16,
        (__int64)&v34,
        (__int64)&v43,
        (__int64)&v29,
        (const wchar_t **)&v42,
        (__int64)&v28,
        (const wchar_t **)&v41,
        (__int64)&v27,
        (const WCHAR **)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (const WCHAR **)&v37,
        (__int64)&v24,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v44);
    }
  }
  else
  {
    v18 = (_DWORD *)v13[1];
    if ( *v18 > 5u && tlgKeywordOn(v13[1], 0x400000000000LL) )
    {
      LOBYTE(v44) = a5;
      v29 = *((_DWORD *)a4 + 3);
      v28 = *((_DWORD *)a4 + 2);
      v27 = *((_DWORD *)a4 + 1);
      v26 = *(_DWORD *)a4;
      v25 = a3;
      v24 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v20 + 76);
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v18,
        byte_18051CD95,
        (const GUID *)(v20 + 8),
        v21,
        (__int64)&v34,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v44);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)((char *)this + 8));
}
