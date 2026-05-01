/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803C0E70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180056CE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180057710 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801137A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801137A8.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180147068 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  _DWORD *v12; // rcx
  int v13; // eax
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID v19; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28; // [rsp+110h] [rbp-20h] BYREF
  __int64 v29; // [rsp+118h] [rbp-18h] BYREF
  __int64 v30[6]; // [rsp+120h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v32; // [rsp+168h] [rbp+38h] BYREF
  __int64 v33; // [rsp+170h] [rbp+40h] BYREF
  __int64 v34; // [rsp+178h] [rbp+48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v19 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v19)
      && (_DWORD)fPending )
    {
      v19 = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v9 = (_DWORD *)*((_QWORD *)v19 + 1);
    if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v27 = *((_QWORD *)a2 + 5);
      LODWORD(v32) = a2[15];
      LODWORD(v33) = a2[2];
      v26 = *((_QWORD *)a2 + 14);
      v25 = *((_QWORD *)a2 + 13);
      LODWORD(v34) = a2[24];
      v24 = *((_QWORD *)a2 + 11);
      v23 = *((_QWORD *)a2 + 10);
      LODWORD(v17) = a2[18];
      v22 = *((_QWORD *)a2 + 8);
      v16 = a2[6];
      v21 = *((_QWORD *)a2 + 2);
      v15 = *a2;
      v28 = *((_QWORD *)a2 + 15);
      LODWORD(v20) = a2[14];
      v29 = *((_QWORD *)a2 + 6);
      LODWORD(Context) = a2[1];
      v30[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v10,
        (unsigned __int8 *)dword_1804D305B,
        (const GUID *)(a1[6] + 8LL),
        v11,
        (__int64)v30,
        (__int64)&Context,
        (const wchar_t **)&v29,
        (__int64)&v20,
        (const wchar_t **)&v28,
        (__int64)&v15,
        (const WCHAR **)&v21,
        (__int64)&v16,
        (const wchar_t **)&v22,
        (__int64)&v17,
        (const wchar_t **)&v23,
        (const WCHAR **)&v24,
        (__int64)&v34,
        (const wchar_t **)&v25,
        (const WCHAR **)&v26,
        (__int64)&v33,
        (__int64)&v32,
        (const wchar_t **)&v27);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v4);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 2u && tlgKeywordOn((__int64)v5, 0x600000000000LL) )
    {
      v19 = (LPVOID)*((_QWORD *)a2 + 14);
      v20 = *((_QWORD *)a2 + 13);
      LODWORD(v32) = a2[24];
      v21 = *((_QWORD *)a2 + 11);
      v22 = *((_QWORD *)a2 + 10);
      LODWORD(v33) = a2[18];
      v23 = *((_QWORD *)a2 + 8);
      LODWORD(v34) = a2[6];
      v24 = *((_QWORD *)a2 + 2);
      v15 = *a2;
      v25 = *((_QWORD *)a2 + 15);
      v16 = a2[14];
      v26 = *((_QWORD *)a2 + 6);
      LODWORD(v17) = a2[1];
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v6,
        (unsigned __int8 *)dword_1804D2F46,
        (const GUID *)(a1[6] + 8LL),
        v7,
        (__int64)&v27,
        (__int64)&v17,
        (const wchar_t **)&v26,
        (__int64)&v16,
        (const wchar_t **)&v25,
        (__int64)&v15,
        (const WCHAR **)&v24,
        (__int64)&v34,
        (const wchar_t **)&v23,
        (__int64)&v33,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v32,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19);
    }
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &fPending);
  v12 = (_DWORD *)a1[6];
  v13 = a2[1];
  if ( v13 != v12[21] && (v13 != v12[19] || (int)v12[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v12 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
