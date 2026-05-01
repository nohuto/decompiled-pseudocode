/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803D8980
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
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180186D20 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        unsigned int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // r11
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // r10d
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // r9
  unsigned int v17; // r10d
  int v18; // r11d
  unsigned int v19; // ebx
  _DWORD *v20; // rcx
  unsigned int v21; // eax
  int v23; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v25; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID v27; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35; // [rsp+108h] [rbp-28h] BYREF
  __int64 v36; // [rsp+110h] [rbp-20h] BYREF
  __int64 v37; // [rsp+118h] [rbp-18h] BYREF
  __int64 v38[2]; // [rsp+120h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v40; // [rsp+168h] [rbp+38h] BYREF
  __int64 v41; // [rsp+170h] [rbp+40h] BYREF
  __int64 v42; // [rsp+178h] [rbp+48h] BYREF

  v38[1] = -2LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a2[2]) )
  {
    v27 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v27)
      && (_DWORD)fPending )
    {
      v27 = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v11);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v12 = (_DWORD *)*((_QWORD *)v27 + 1);
    if ( *v12 > 2u )
    {
      v13 = a2[15];
      v14 = a2[2];
      v15 = a2[24];
      v16 = a2[18];
      v17 = a2[6];
      v18 = *a2;
      v19 = a2[1];
      v35 = *((_QWORD *)a2 + 5);
      LODWORD(v40) = v13;
      LODWORD(v41) = v14;
      v34 = *((_QWORD *)a2 + 14);
      v33 = *((_QWORD *)a2 + 13);
      LODWORD(v42) = v15;
      v32 = *((_QWORD *)a2 + 11);
      v31 = *((_QWORD *)a2 + 10);
      LODWORD(v25) = v16;
      v30 = *((_QWORD *)a2 + 8);
      v24 = v17;
      v29 = *((_QWORD *)a2 + 2);
      v23 = v18;
      v36 = *((_QWORD *)a2 + 15);
      LODWORD(v28) = a2[14];
      v37 = *((_QWORD *)a2 + 6);
      LODWORD(Context) = v19;
      v38[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v12,
        (unsigned __int8 *)&unk_1804D1662,
        (const GUID *)(a1[6] + 8LL),
        v16,
        (__int64)v38,
        (__int64)&Context,
        (const wchar_t **)&v37,
        (__int64)&v28,
        (const wchar_t **)&v36,
        (__int64)&v23,
        (const WCHAR **)&v29,
        (__int64)&v24,
        (const wchar_t **)&v30,
        (__int64)&v25,
        (const wchar_t **)&v31,
        (const WCHAR **)&v32,
        (__int64)&v42,
        (const wchar_t **)&v33,
        (const WCHAR **)&v34,
        (__int64)&v41,
        (__int64)&v40,
        (const wchar_t **)&v35);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v4);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    if ( **((_DWORD **)Context + 1) > 2u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      v6 = a2[24];
      v7 = a2[18];
      v8 = a2[6];
      v9 = *a2;
      v10 = a2[1];
      v27 = (LPVOID)*((_QWORD *)a2 + 14);
      v28 = *((_QWORD *)a2 + 13);
      LODWORD(v40) = v6;
      v29 = *((_QWORD *)a2 + 11);
      v30 = *((_QWORD *)a2 + 10);
      LODWORD(v41) = v7;
      v31 = *((_QWORD *)a2 + 8);
      LODWORD(v42) = v8;
      v32 = *((_QWORD *)a2 + 2);
      v23 = v9;
      v33 = *((_QWORD *)a2 + 15);
      v24 = a2[14];
      v34 = *((_QWORD *)a2 + 6);
      LODWORD(v25) = v10;
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v5,
        (unsigned __int8 *)dword_1804D0EBD,
        (const GUID *)(a1[6] + 8LL),
        v9,
        (__int64)&v35,
        (__int64)&v25,
        (const wchar_t **)&v34,
        (__int64)&v24,
        (const wchar_t **)&v33,
        (__int64)&v23,
        (const WCHAR **)&v32,
        (__int64)&v42,
        (const wchar_t **)&v31,
        (__int64)&v41,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v40,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27);
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &fPending);
  v20 = (_DWORD *)a1[6];
  v21 = a2[1];
  if ( v21 != v20[21] && (v21 != v20[19] || (int)v20[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v20 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
