/*
 * XREFs of ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIUSize@Foundation@Windows@@_N1J@Z @ 0x180363918
 * Callers:
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x180357BC0 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801733F8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180356924 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444AEBU?$_tlgWrapperByVal@$00@@74@Z @ 0x180358170 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180358170.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@54@Z @ 0x18035875C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        int a7)
{
  __int64 v7; // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v23[4]; // [rsp+E0h] [rbp-80h] BYREF
  int v24; // [rsp+E4h] [rbp-7Ch] BYREF
  DWORD v25; // [rsp+E8h] [rbp-78h] BYREF
  int v26; // [rsp+ECh] [rbp-74h] BYREF
  int v27; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v28; // [rsp+F4h] [rbp-6Ch] BYREF
  int v29; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v30; // [rsp+100h] [rbp-60h]
  int v31; // [rsp+108h] [rbp-58h] BYREF
  int v32; // [rsp+10Ch] [rbp-54h] BYREF
  int v33; // [rsp+110h] [rbp-50h] BYREF
  int v34; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v35; // [rsp+118h] [rbp-48h] BYREF
  __int64 v36; // [rsp+120h] [rbp-40h] BYREF
  __int64 v37; // [rsp+128h] [rbp-38h] BYREF
  __int64 v38; // [rsp+130h] [rbp-30h] BYREF
  __int64 v39; // [rsp+138h] [rbp-28h] BYREF
  __int64 v40; // [rsp+140h] [rbp-20h] BYREF
  __int64 v41; // [rsp+148h] [rbp-18h] BYREF
  __int64 v42; // [rsp+150h] [rbp-10h] BYREF
  __int64 v43; // [rsp+158h] [rbp-8h] BYREF
  __int64 v44; // [rsp+160h] [rbp+0h] BYREF
  __int64 v45; // [rsp+190h] [rbp+30h] BYREF

  v7 = *(_QWORD *)(a1 + 48);
  v30 = a4;
  v11 = *(_DWORD *)(v7 + 76);
  if ( v11 < 0 && v11 == *(_DWORD *)(v7 + 84) )
    v12 = v7 + 80;
  else
    v12 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v14 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v13,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v12 )
  {
    v15 = (_DWORD *)v14[1];
    if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v31 = a7;
      LOBYTE(v45) = a6;
      v23[0] = a5;
      v32 = HIDWORD(v30);
      v33 = v30;
      v36 = *(_QWORD *)(v12 + 112);
      v37 = *(_QWORD *)(v12 + 104);
      v18 = *(_QWORD *)(a1 + 48);
      v25 = *(_DWORD *)(v12 + 96);
      v38 = *(_QWORD *)(v12 + 88);
      v39 = *(_QWORD *)(v12 + 80);
      v26 = *(_DWORD *)(v12 + 72);
      v40 = *(_QWORD *)(v12 + 64);
      v27 = *(_DWORD *)(v12 + 24);
      v41 = *(_QWORD *)(v12 + 16);
      LODWORD(v28) = *(_DWORD *)v12;
      v42 = *(_QWORD *)(v12 + 120);
      HIDWORD(v28) = *(_DWORD *)(v12 + 56);
      v43 = *(_QWORD *)(v12 + 48);
      v29 = *(_DWORD *)(v12 + 4);
      v44 = 0x1000000LL;
      v35 = 0x1000000LL;
      v34 = a3;
      v24 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v16,
        (unsigned __int8 *)dword_18051C252,
        (const GUID *)(v18 + 8),
        v17,
        (__int64)&v35,
        (__int64)&v44,
        (__int64)&v29,
        (const wchar_t **)&v43,
        (__int64)&v28 + 4,
        (const wchar_t **)&v42,
        (__int64)&v28,
        (const WCHAR **)&v41,
        (__int64)&v27,
        (const wchar_t **)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (const WCHAR **)&v38,
        (__int64)&v25,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v24,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)v23,
        (__int64)&v45,
        (__int64)&v31);
    }
  }
  else
  {
    v19 = (_DWORD *)v14[1];
    if ( *v19 > 5u && tlgKeywordOn(v14[1], 0x400000000000LL) )
    {
      v29 = a7;
      LOBYTE(v45) = a6;
      v23[0] = a5;
      v28 = v30;
      v27 = a3;
      v26 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *(_QWORD *)(a1 + 48);
      v25 = CurrentThreadId;
      v24 = *(_DWORD *)(v21 + 76);
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v19,
        byte_18051C3DF,
        (const GUID *)(v21 + 8),
        v22,
        (__int64)&v35,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v28 + 4,
        (__int64)v23,
        (__int64)&v45,
        (__int64)&v29);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
