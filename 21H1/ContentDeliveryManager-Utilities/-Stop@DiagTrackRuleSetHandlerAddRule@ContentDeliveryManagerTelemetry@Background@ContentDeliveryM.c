/*
 * XREFs of ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180079E70
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A740 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180002BC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x180002E7C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002E7C.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *this,
        const char *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  const struct _tlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // r9
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h] BYREF
  __int64 v28; // [rsp+108h] [rbp-38h] BYREF
  __int64 v29; // [rsp+110h] [rbp-30h] BYREF
  __int64 v30; // [rsp+118h] [rbp-28h] BYREF
  __int64 v31; // [rsp+120h] [rbp-20h] BYREF
  __int64 v32; // [rsp+128h] [rbp-18h] BYREF
  __int64 v33; // [rsp+130h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+160h] [rbp+20h] BYREF
  __int64 v35; // [rsp+170h] [rbp+30h] BYREF
  __int64 v36; // [rsp+178h] [rbp+38h] BYREF

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
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = *((_QWORD *)v6 + 5);
      v26 = *((_QWORD *)v6 + 13);
      LODWORD(v36) = v6[24];
      v10 = *((_QWORD *)v6 + 11);
      v22 = 0LL;
      v11 = *((_QWORD *)this + 6);
      v27 = v10;
      v28 = *((_QWORD *)v6 + 10);
      v17 = v6[18];
      v29 = *((_QWORD *)v6 + 8);
      v18 = v6[6];
      v30 = *((_QWORD *)v6 + 2);
      v19 = *v6;
      v31 = *((_QWORD *)v6 + 15);
      v20 = v6[14];
      v32 = *((_QWORD *)v6 + 6);
      v21 = v6[1];
      v24 = v9;
      LODWORD(SRWLock) = v6[15];
      LODWORD(v35) = v6[2];
      v25 = *((_QWORD *)v6 + 14);
      v23 = (__int64)a2;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v8,
        (unsigned __int8 *)dword_1801736EE,
        (const GUID *)(v11 + 8),
        (__int64)v8,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v21,
        (const unsigned __int16 **)&v32,
        (__int64)&v20,
        (const unsigned __int16 **)&v31,
        (__int64)&v19,
        (const WCHAR **)&v30,
        (__int64)&v18,
        (const unsigned __int16 **)&v29,
        (__int64)&v17,
        (const unsigned __int16 **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v36,
        (const unsigned __int16 **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v35,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v24,
        (const unsigned __int16 **)&v23);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v36 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 76);
      v22 = 0LL;
      LODWORD(v35) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v12,
        byte_180173CDB,
        (const GUID *)(v14 + 8),
        v16,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *)((char *)this + 8));
}
