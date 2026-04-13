/*
 * XREFs of ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x18004AB18
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004C3CC (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564565@Z @ 0x1800028D0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800028D0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180002BC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000D2AC (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002996C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035630 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        const char *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r9
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  int v20; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  __int64 v34; // [rsp+150h] [rbp+20h] BYREF
  __int64 v35; // [rsp+158h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v9 = (__int64)v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = *((_QWORD *)this + 6);
      v11 = (__int64)v8;
      v24 = *((_QWORD *)v6 + 14);
      v12 = *((_QWORD *)v6 + 13);
      v22 = 0LL;
      v25 = v12;
      LODWORD(SRWLock) = v6[24];
      v26 = *((_QWORD *)v6 + 11);
      v27 = *((_QWORD *)v6 + 10);
      LODWORD(v34) = v6[18];
      v28 = *((_QWORD *)v6 + 8);
      LODWORD(v35) = v6[6];
      v29 = *((_QWORD *)v6 + 2);
      v19 = *v6;
      v30 = *((_QWORD *)v6 + 15);
      v20 = v6[14];
      v31 = *((_QWORD *)v6 + 6);
      LODWORD(v21) = v6[1];
      v23 = (__int64)a2;
      v32[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        v11,
        (unsigned __int8 *)dword_180175E51,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v22,
        (__int64)v32,
        (__int64)&v21,
        (const unsigned __int16 **)&v31,
        (__int64)&v20,
        (const unsigned __int16 **)&v30,
        (__int64)&v19,
        (const WCHAR **)&v29,
        (__int64)&v35,
        (const unsigned __int16 **)&v28,
        (__int64)&v34,
        (const unsigned __int16 **)&v27,
        (const WCHAR **)&v26,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v25,
        (const WCHAR **)&v24,
        (const unsigned __int16 **)&v23);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v13 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 5u
      && (*((_QWORD *)v13 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v13 + 3) & 0x400000000000LL) == *((_QWORD *)v13 + 3) )
    {
      v35 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v22 = 0LL;
      LODWORD(v34) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v14,
        byte_1801762AC,
        (const GUID *)(v16 + 8),
        v18,
        (__int64)&v22,
        (__int64)&v34,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
