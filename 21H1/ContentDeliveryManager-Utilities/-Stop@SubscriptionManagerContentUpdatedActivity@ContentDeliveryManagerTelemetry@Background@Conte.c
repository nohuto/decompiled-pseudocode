/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18004088C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004378C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444@Z @ 0x1800025B0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800025B0.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v3; // rdi
  int v7; // eax
  int *v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  RTL_SRWLOCK *v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v18; // [rsp+CCh] [rbp-7Ch] BYREF
  int v19; // [rsp+D0h] [rbp-78h] BYREF
  int v20; // [rsp+D4h] [rbp-74h] BYREF
  int v21; // [rsp+D8h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-68h] BYREF
  PSRWLOCK v23; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-58h] BYREF
  int v25; // [rsp+F8h] [rbp-50h] BYREF
  int v26; // [rsp+FCh] [rbp-4Ch] BYREF
  const WCHAR *v27; // [rsp+100h] [rbp-48h] BYREF
  __int64 v28; // [rsp+108h] [rbp-40h] BYREF
  __int64 v29; // [rsp+110h] [rbp-38h] BYREF
  __int64 v30; // [rsp+118h] [rbp-30h] BYREF
  __int64 v31; // [rsp+120h] [rbp-28h] BYREF
  __int64 v32; // [rsp+128h] [rbp-20h] BYREF
  __int64 v33; // [rsp+130h] [rbp-18h] BYREF
  __int64 v34; // [rsp+138h] [rbp-10h] BYREF
  __int64 v35; // [rsp+140h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+148h] [rbp+0h] BYREF
  PSRWLOCK *v37; // [rsp+168h] [rbp+20h]
  __int64 v38; // [rsp+170h] [rbp+28h]
  int *v39; // [rsp+178h] [rbp+30h]
  __int64 v40; // [rsp+180h] [rbp+38h]
  DWORD *v41; // [rsp+188h] [rbp+40h]
  __int64 v42; // [rsp+190h] [rbp+48h]
  int *v43; // [rsp+198h] [rbp+50h]
  __int64 v44; // [rsp+1A0h] [rbp+58h]
  int *v45; // [rsp+1A8h] [rbp+60h]
  __int64 v46; // [rsp+1B0h] [rbp+68h]
  int *v47; // [rsp+1B8h] [rbp+70h]
  __int64 v48; // [rsp+1C0h] [rbp+78h]
  PSRWLOCK *p_SRWLock; // [rsp+1C8h] [rbp+80h]
  __int64 v50; // [rsp+1D0h] [rbp+88h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  if ( v8 )
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v9 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v27 = (const WCHAR *)*((_QWORD *)v8 + 14);
      v28 = *((_QWORD *)v8 + 13);
      v17 = v8[24];
      v11 = *((_QWORD *)this + 6);
      v29 = *((_QWORD *)v8 + 11);
      v30 = *((_QWORD *)v8 + 10);
      v18 = v8[18];
      v31 = *((_QWORD *)v8 + 8);
      v19 = v8[6];
      v32 = *((_QWORD *)v8 + 2);
      v20 = *v8;
      v33 = *((_QWORD *)v8 + 15);
      v21 = v8[14];
      v34 = *((_QWORD *)v8 + 6);
      LODWORD(SRWLock) = v8[1];
      v24 = 0LL;
      v25 = a3;
      v26 = a2;
      v35 = 0x1000000LL;
      v23 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        (unsigned __int8 *)dword_180171429,
        (const GUID *)(v11 + 8),
        (__int64)v10,
        (__int64)&v23,
        (__int64)&v35,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v34,
        (__int64)&v21,
        (const unsigned __int16 **)&v33,
        (__int64)&v20,
        (const WCHAR **)&v32,
        (__int64)&v19,
        (const unsigned __int16 **)&v31,
        (__int64)&v18,
        (const unsigned __int16 **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v17,
        (const unsigned __int16 **)&v28,
        &v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24 + 4,
        (__int64)&v24);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v23);
    v12 = v23;
    **((_DWORD **)this + 6) = 2;
    if ( v12 )
      ReleaseSRWLockExclusive(v12);
    v13 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 5u
      && (*((_QWORD *)v13 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v13 + 3) & 0x200000000000LL) == *((_QWORD *)v13 + 3) )
    {
      LODWORD(SRWLock) = 0;
      v21 = 0;
      v20 = a3;
      v19 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v18 = CurrentThreadId;
      v50 = 4LL;
      v48 = 4LL;
      v17 = *(_DWORD *)(v16 + 76);
      p_SRWLock = &SRWLock;
      v47 = &v21;
      v45 = &v20;
      v43 = &v19;
      v41 = &v18;
      v39 = &v17;
      v37 = &v23;
      v23 = 0LL;
      v46 = 4LL;
      v44 = 4LL;
      v42 = 4LL;
      v40 = 4LL;
      v38 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        v14,
        (unsigned __int8 *)dword_18017118F,
        (const GUID *)(v16 + 8),
        0LL,
        9u,
        &v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)((char *)this + 8));
}
