/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x1800640BC
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180065E60 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x1800031D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800031D8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@D@@@Z @ 0x180003550 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const char *a3)
{
  int *v3; // rdi
  int v5; // r14d
  int v7; // eax
  int *v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  const struct _tlgProvider_t *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  const struct _tlgProvider_t *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r9
  int v19; // [rsp+D0h] [rbp-80h] BYREF
  int v20; // [rsp+D4h] [rbp-7Ch] BYREF
  int v21; // [rsp+D8h] [rbp-78h] BYREF
  int v22; // [rsp+DCh] [rbp-74h] BYREF
  int v23; // [rsp+E0h] [rbp-70h] BYREF
  int v24; // [rsp+E4h] [rbp-6Ch] BYREF
  int v25; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+100h] [rbp-50h] BYREF
  __int64 v29; // [rsp+108h] [rbp-48h] BYREF
  __int64 v30; // [rsp+110h] [rbp-40h] BYREF
  __int64 v31; // [rsp+118h] [rbp-38h] BYREF
  __int64 v32; // [rsp+120h] [rbp-30h] BYREF
  __int64 v33; // [rsp+128h] [rbp-28h] BYREF
  __int64 v34; // [rsp+130h] [rbp-20h] BYREF
  __int64 v35; // [rsp+138h] [rbp-18h] BYREF
  __int64 v36; // [rsp+140h] [rbp-10h] BYREF
  __int64 v37; // [rsp+148h] [rbp-8h] BYREF
  PSRWLOCK SRWLock; // [rsp+170h] [rbp+20h] BYREF
  __int64 v39; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v5 = a2;
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v9 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v8 )
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v30 = *((_QWORD *)v8 + 14);
      v31 = *((_QWORD *)v8 + 13);
      v21 = v8[24];
      v11 = *((_QWORD *)v8 + 5);
      v32 = *((_QWORD *)v8 + 11);
      v12 = *((_QWORD *)v8 + 10);
      v27 = 0LL;
      v13 = *((_QWORD *)this + 6);
      v33 = v12;
      v22 = v8[18];
      v34 = *((_QWORD *)v8 + 8);
      v23 = v8[6];
      v35 = *((_QWORD *)v8 + 2);
      v24 = *v8;
      v36 = *((_QWORD *)v8 + 15);
      v25 = v8[14];
      v37 = *((_QWORD *)v8 + 6);
      v19 = v8[1];
      v29 = v11;
      LODWORD(v39) = v8[15];
      LODWORD(v11) = v8[2];
      v28 = (__int64)a3;
      LODWORD(SRWLock) = v5;
      v20 = v11;
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18017283D,
        (const GUID *)(v13 + 8),
        (__int64)v10,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        (const unsigned __int16 **)&v37,
        (__int64)&v25,
        (const unsigned __int16 **)&v36,
        (__int64)&v24,
        (const WCHAR **)&v35,
        (__int64)&v23,
        (const unsigned __int16 **)&v34,
        (__int64)&v22,
        (const unsigned __int16 **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v21,
        (const unsigned __int16 **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v20,
        (__int64)&v39,
        (const unsigned __int16 **)&v29,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v28);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v14 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v14 > 5u )
    {
      v27 = (__int64)a3;
      LODWORD(SRWLock) = v5;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v39) = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v26 = 0LL;
      v19 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v14,
        byte_180173183,
        (const GUID *)(v16 + 8),
        v18,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v39,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)((char *)this + 8));
}
