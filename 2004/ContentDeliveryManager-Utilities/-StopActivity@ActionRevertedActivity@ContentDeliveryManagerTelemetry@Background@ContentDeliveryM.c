/*
 * XREFs of ?StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180051BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180001CAC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000229C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x1800253FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029D8C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035A80 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // eax
  int v15; // [rsp+A0h] [rbp-19h] BYREF
  int v16; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v26[4]; // [rsp+F0h] [rbp+37h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+67h] BYREF
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v7 = (__int64)v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = *(_QWORD *)(v4 + 112);
      v9 = *((_QWORD *)this + 6);
      v26[0] = 0LL;
      v17 = v8;
      v18 = *(_QWORD *)(v4 + 104);
      LODWORD(SRWLock) = *(_DWORD *)(v4 + 96);
      v19 = *(_QWORD *)(v4 + 88);
      v20 = *(_QWORD *)(v4 + 80);
      LODWORD(v28) = *(_DWORD *)(v4 + 72);
      v21 = *(_QWORD *)(v4 + 64);
      LODWORD(v29) = *(_DWORD *)(v4 + 24);
      v22 = *(_QWORD *)(v4 + 16);
      LODWORD(v30) = *(_DWORD *)v4;
      v23 = *(_QWORD *)(v4 + 120);
      v15 = *(_DWORD *)(v4 + 56);
      v24 = *(_QWORD *)(v4 + 48);
      v16 = *(_DWORD *)(v4 + 4);
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v7,
        (unsigned __int8 *)dword_1801767DB,
        (const GUID *)(v9 + 8),
        v7,
        (__int64)v26,
        (__int64)&v25,
        (__int64)&v16,
        (const unsigned __int16 **)&v24,
        (__int64)&v15,
        (const unsigned __int16 **)&v23,
        (__int64)&v30,
        (const WCHAR **)&v22,
        (__int64)&v29,
        (const unsigned __int16 **)&v21,
        (__int64)&v28,
        (const unsigned __int16 **)&v20,
        (const WCHAR **)&v19,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v18,
        (const WCHAR **)&v17);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v11 = (__int64)v10;
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 76);
      v29 = 0LL;
      LODWORD(v28) = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_180176CA2,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&SRWLock);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)((char *)this + 8));
}
