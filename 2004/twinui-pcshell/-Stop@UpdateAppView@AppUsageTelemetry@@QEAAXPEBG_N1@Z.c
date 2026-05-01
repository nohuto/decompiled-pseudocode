/*
 * XREFs of ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x18045A218
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x18045A6F0 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045DEF4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173618 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x180456F18 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x1804584A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1804584A4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x1804587C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 */

void __fastcall AppUsageTelemetry::UpdateAppView::Stop(
        AppUsageTelemetry::UpdateAppView *this,
        const unsigned __int16 *a2,
        char a3,
        char a4)
{
  int *v4; // rdi
  int v9; // eax
  int *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  _DWORD *v17; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE v21[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v22; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+C8h] [rbp-78h] BYREF
  int v24; // [rsp+CCh] [rbp-74h] BYREF
  int v25; // [rsp+D0h] [rbp-70h] BYREF
  int v26; // [rsp+D4h] [rbp-6Ch] BYREF
  int v27; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h] BYREF
  __int64 v33; // [rsp+108h] [rbp-38h] BYREF
  __int64 v34; // [rsp+110h] [rbp-30h] BYREF
  __int64 v35; // [rsp+118h] [rbp-28h] BYREF
  __int64 v36; // [rsp+120h] [rbp-20h] BYREF
  __int64 v37; // [rsp+128h] [rbp-18h] BYREF
  __int64 v38; // [rsp+130h] [rbp-10h] BYREF
  __int64 v39; // [rsp+160h] [rbp+20h] BYREF

  v4 = (int *)*((_QWORD *)this + 6);
  v9 = v4[19];
  if ( v9 < 0 && v9 == v4[21] )
    v10 = v4 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v12 = wil::details::static_lazy<AppUsageTelemetry>::get(
          v11,
          _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_);
  if ( v10 )
  {
    v13 = (_DWORD *)v12[1];
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v31 = *((_QWORD *)v10 + 14);
      v32 = *((_QWORD *)v10 + 13);
      v16 = *((_QWORD *)this + 6);
      v24 = v10[24];
      v33 = *((_QWORD *)v10 + 11);
      v34 = *((_QWORD *)v10 + 10);
      v25 = v10[18];
      v35 = *((_QWORD *)v10 + 8);
      v26 = v10[6];
      v36 = *((_QWORD *)v10 + 2);
      v27 = *v10;
      v37 = *((_QWORD *)v10 + 15);
      v22 = v10[14];
      v38 = *((_QWORD *)v10 + 6);
      v23 = v10[1];
      LOBYTE(v39) = a4;
      v21[0] = a3;
      v30 = (__int64)a2;
      v28 = 0x1000000LL;
      v29 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v14,
        (unsigned __int8 *)dword_180526833,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v23,
        (const wchar_t **)&v38,
        (__int64)&v22,
        (const wchar_t **)&v37,
        (__int64)&v27,
        (const WCHAR **)&v36,
        (__int64)&v26,
        (const wchar_t **)&v35,
        (__int64)&v25,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v24,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (const WCHAR **)&v30,
        (__int64)v21,
        (__int64)&v39);
    }
  }
  else
  {
    v17 = (_DWORD *)v12[1];
    if ( *v17 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
    {
      LOBYTE(v39) = a4;
      v21[0] = a3;
      v29 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v19 + 76);
      v28 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v17,
        (unsigned __int8 *)dword_180526972,
        (const GUID *)(v19 + 8),
        v20,
        (__int64)&v28,
        (__int64)&v22,
        (__int64)&v23,
        (const WCHAR **)&v29,
        (__int64)v21,
        (__int64)&v39);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
