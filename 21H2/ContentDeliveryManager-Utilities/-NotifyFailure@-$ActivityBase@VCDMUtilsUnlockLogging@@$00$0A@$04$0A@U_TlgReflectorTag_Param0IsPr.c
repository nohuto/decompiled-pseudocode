/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180081670
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000128C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001544 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001544.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180004A38 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800362D0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008010C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v3; // eax
  const struct _tlgProvider_t *v5; // r9
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v11; // eax
  int v13; // [rsp+B0h] [rbp-80h] BYREF
  int v14; // [rsp+B4h] [rbp-7Ch] BYREF
  int v15; // [rsp+B8h] [rbp-78h] BYREF
  int v16; // [rsp+BCh] [rbp-74h] BYREF
  int v17; // [rsp+C0h] [rbp-70h] BYREF
  int v18; // [rsp+C4h] [rbp-6Ch] BYREF
  int v19; // [rsp+C8h] [rbp-68h] BYREF
  int v20; // [rsp+CCh] [rbp-64h] BYREF
  int v21; // [rsp+D0h] [rbp-60h] BYREF
  int v22; // [rsp+D4h] [rbp-5Ch] BYREF
  const WCHAR *v23; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30; // [rsp+110h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp-18h] BYREF
  __int64 v32; // [rsp+120h] [rbp-10h] BYREF
  __int64 v33; // [rsp+128h] [rbp-8h] BYREF
  __int64 v34; // [rsp+130h] [rbp+0h] BYREF
  __int64 v35; // [rsp+138h] [rbp+8h] BYREF
  __int64 v36; // [rsp+140h] [rbp+10h] BYREF
  __int64 v37; // [rsp+148h] [rbp+18h] BYREF
  __int64 v38; // [rsp+150h] [rbp+20h] BYREF
  __int64 v39; // [rsp+158h] [rbp+28h] BYREF
  __int64 v40; // [rsp+160h] [rbp+30h] BYREF
  __int64 v41; // [rsp+168h] [rbp+38h] BYREF
  PSRWLOCK SRWLock; // [rsp+170h] [rbp+40h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+70h] BYREF
  __int64 v44; // [rsp+1A8h] [rbp+78h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+80h] BYREF
  __int64 v46; // [rsp+1B8h] [rbp+88h] BYREF

  v3 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2[2];
  if ( v3 == `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen )
  {
    v7 = CDMUtilsUnlockLogging::Provider();
    if ( *(_DWORD *)v7 > 2u )
    {
      v8 = *((_QWORD *)a2 + 5);
      v9 = *(_QWORD *)(a1 + 48);
      v17 = a2[24];
      v35 = *((_QWORD *)a2 + 11);
      v36 = *((_QWORD *)a2 + 10);
      v18 = a2[18];
      v37 = *((_QWORD *)a2 + 8);
      v19 = a2[6];
      v38 = *((_QWORD *)a2 + 2);
      v20 = *a2;
      v39 = *((_QWORD *)a2 + 15);
      v21 = a2[14];
      v40 = *((_QWORD *)a2 + 6);
      v22 = a2[1];
      v32 = v8;
      v15 = a2[15];
      v16 = a2[2];
      v33 = *((_QWORD *)a2 + 14);
      v34 = *((_QWORD *)a2 + 13);
      v41 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v7,
        (unsigned __int8 *)dword_180179957,
        (const GUID *)(v9 + 8),
        (__int64)v7,
        (__int64)&v41,
        (__int64)&v22,
        (const unsigned __int16 **)&v40,
        (__int64)&v21,
        (const unsigned __int16 **)&v39,
        (__int64)&v20,
        (const WCHAR **)&v38,
        (__int64)&v19,
        (const unsigned __int16 **)&v37,
        (__int64)&v18,
        (const unsigned __int16 **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v17,
        (const unsigned __int16 **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v16,
        (__int64)&v15,
        (const unsigned __int16 **)&v32);
    }
  }
  else
  {
    v5 = CDMUtilsUnlockLogging::Provider();
    if ( *(_DWORD *)v5 > 2u
      && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = *(_QWORD *)(a1 + 48);
      v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v24 = *((_QWORD *)a2 + 13);
      LODWORD(v43) = a2[24];
      v25 = *((_QWORD *)a2 + 11);
      v26 = *((_QWORD *)a2 + 10);
      LODWORD(v44) = a2[18];
      v27 = *((_QWORD *)a2 + 8);
      LODWORD(v45) = a2[6];
      v28 = *((_QWORD *)a2 + 2);
      LODWORD(v46) = *a2;
      v29 = *((_QWORD *)a2 + 15);
      v13 = a2[14];
      v30 = *((_QWORD *)a2 + 6);
      v14 = a2[1];
      v31 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        (__int64)v5,
        (unsigned __int8 *)dword_180178EAC,
        (const GUID *)(v6 + 8),
        (__int64)v5,
        (__int64)&v31,
        (__int64)&v14,
        (const unsigned __int16 **)&v30,
        (__int64)&v13,
        (const unsigned __int16 **)&v29,
        (__int64)&v46,
        (const WCHAR **)&v28,
        (__int64)&v45,
        (const unsigned __int16 **)&v27,
        (__int64)&v44,
        (const unsigned __int16 **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v43,
        (const unsigned __int16 **)&v24,
        &v23);
    }
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v10 = *(_DWORD **)(a1 + 48);
  v11 = a2[1];
  if ( v11 != v10[21] && (v11 != v10[19] || (int)v10[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v10 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
